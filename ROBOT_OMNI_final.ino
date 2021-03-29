//****bố trí bánh xe****//
//bánh 1 -------- bánh 2
//bánh 3 -------- bánh 4
//****bố trí cảm biến****//
//trước: 39-38-37-36-35-34
//sau: 27-26-25-24-23-22
//phải: 33-32-31-30-29-28
//trái: 45-44-43-42-41-40
#include <Servo.h>
#define pwm1_lui    4
#define pwm1_toi    5
#define pwm2_lui   10
#define pwm2_toi   11
#define pwm3_lui    6
#define pwm3_toi    7
#define pwm4_lui    8
#define pwm4_toi    9

#define encoder1    2
#define encoder2    3
#define encoder3   19
#define encoder4   18

#define nutdo 52
#define nutxanh 53

#define cb_truoc_sau  1
#define cb_trai_phai  2

#define chay_toi    1
#define chay_trai   2
#define chay_phai   3
#define chay_lui    4

#define quay_trai   1
#define quay_phai   2

Servo khop_duoi; //0-180
Servo khop_phai; //0-80-150
Servo khop_trai;
Servo khop_duoi_mot; //0-180
Servo khop_phai_mot; //0-80-150
Servo khop_trai_mot;
//byte servo1, servo2, servo3, servo4;
volatile int a = 0, b = 170, c = 90;
volatile int a1 = 0, b1 = 170, c1 = 90;
int sensor[6]={0, 0, 0, 0, 0, 0};
int sensor1[6]={0, 0, 0, 0, 0, 0};

int error,previous_error;
float P,I,D,kp=25,ki=0.0001,kd=250;
int PID_value,PID_phai,PID_trai;
float P1,I1,D1;
int error1,previous_error1;
int PID_value_1,PID_phai_1,PID_trai_1;
int gia_tri_dau_phai=180;
int gia_tri_dau_trai=180;

volatile int    xung_encoder1, xung_encoder2, xung_encoder3, xung_encoder4; 

void doc_encoder1() //ngắt 0, chân 2
{
   xung_encoder1++;
}
void doc_encoder2() //ngắt 1, chân 3
{
   xung_encoder2++;
}
void doc_encoder3() //ngắt 4, chân 19
{
   xung_encoder3++;
}
void doc_encoder4() //ngắt 5, chân 18
{
   xung_encoder4++;
}
void setup()
{
  Serial.begin(9600); 
  pinMode(encoder1,   INPUT);
  pinMode(encoder2,   INPUT);
  pinMode(encoder3,   INPUT);
  pinMode(encoder4,   INPUT);
  digitalWrite(encoder1,   HIGH); 
  digitalWrite(encoder2,   HIGH); 
  digitalWrite(encoder3,   HIGH); 
  digitalWrite(encoder4,   HIGH); 
  attachInterrupt(0, doc_encoder1,  RISING); //ngắt 0, chân 2
  attachInterrupt(1, doc_encoder2,  RISING); //ngắt 1, chân 3
  attachInterrupt(4, doc_encoder3,  RISING); //ngắt 4, chân 19
  attachInterrupt(5, doc_encoder4,  RISING); //ngắt 5, chân 18

  pinMode(nutdo, INPUT);
  pinMode(nutxanh, INPUT);
  
  for(int i = 5; i < 17; i++)
  {  pinMode(i ,OUTPUT);  }
  for(int i = 22; i < 46; i++)
  {  pinMode(i ,INPUT);  }
  for(int i = 46; i < 50; i++)
  {  pinMode(i ,OUTPUT);  }
 
  for(int i = 5; i < 14; i++)
  {  analogWrite(i,0); }
  analogWrite(pwm1_toi, 0);
  analogWrite(pwm2_toi, 0);
  analogWrite(pwm3_toi, 0);
  analogWrite(pwm4_toi, 0);
  delay(1000);

  khop_duoi.attach(48);
  khop_trai.attach(47); //0-180
  khop_phai.attach(46); //0-80-150

  khop_duoi.write(a);
  khop_phai.write(b);
  khop_trai.write(c);

  khop_duoi_mot.attach(15);
  khop_trai_mot.attach(14); //0-180
  khop_phai_mot.attach(16); //0-80-150

  khop_duoi_mot.write(a1);
  khop_phai_mot.write(b1);
  khop_trai_mot.write(c1);

  nanglen();
  nanglen_mot();
  tha();
  tha_mot();
}
/*
 CÁC ĐỊNH NGHĨA:
  cCÁC ĐỊNH NGHĨA:
  chọn cảm biến: (cb_truoc_sau, cb_trai_phai)
  chọn hướng chạy: (chay_toi, chay_lui, chay_trai, chay_phai)
  chọn hướng quay: (quay_trai, quay_phai)
  tốc độ: 100 đến 180
  tốc độ: 100 đến 180
 CÁC CHƯƠNG TRÌNH CON:
  chay_do_line_do_encoder (chọn cảm biến, chọn hướng chạy, số xung encoder, dừng = 1/không dừng = 0, tốc độ trái, tốc độ phải, kp); 
  chay_do_line_doc_cam_bien (chọn cảm biến, chọn hướng chạy, chọn cảm biến đếm line, số line, dừng = 1/không dừng = 0, tốc độ trái, tốc độ phải, kp);
  quay_bat_line(huong_quay, toc_do, cam_bien_bat_line)
  quay_encoder(huong_quay, toc_do, số xung encoder)
 */
void loop()
{ 
int cpd = digitalRead(nutdo);
int cpx = digitalRead(nutxanh);

if(cpd == 1) 
  {
    //delay(10);
    hai_tay_gap_qua_do_san_do();
    hai_tay_gap_2_qua_do_san_do();
  }
if (cpx == 1)
 {  
   //code san xanh 

   hai_tay_gap_qua_do_san_xanh();
   hai_tay_gap_2_qua_do_san_xanh();
 
 }



     

}
