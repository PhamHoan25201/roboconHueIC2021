//****bố trí cảm biến****//
//trước: 39-38-37-36-35-34
//sau: 27-26-25-24-23-22
//phải: 33-32-31-30-29-28
//trái: 45-44-43-42-41-40
void doc_cam_bien_do_line(int huong_cb)
{
  //kết nối sensor: trai 0-1-2-3-4-5 phai
  if(huong_cb == cb_truoc_sau) //đọc 6 cảm biến trước và 6 cảm biến sau
  {
    //đọc 6 cảm biến trước
    sensor[0]=digitalRead(39);
    sensor[1]=digitalRead(38);
    sensor[2]=digitalRead(37);
    sensor[3]=digitalRead(36);
    sensor[4]=digitalRead(35);
    sensor[5]=digitalRead(34);
    //đọc 6 cảm biến sau
    sensor1[0]=digitalRead(27);
    sensor1[1]=digitalRead(26);
    sensor1[2]=digitalRead(25);
    sensor1[3]=digitalRead(24);
    sensor1[4]=digitalRead(23);
    sensor1[5]=digitalRead(22);
  }
  if(huong_cb == cb_trai_phai) //đọc 6 cảm biến trước và 6 cảm biến sau
  {
    //đọc 6 cảm biến trái
    sensor[0]=digitalRead(45);
    sensor[1]=digitalRead(44);
    sensor[2]=digitalRead(43);
    sensor[3]=digitalRead(42);
    sensor[4]=digitalRead(41);
    sensor[5]=digitalRead(40);
    //đọc 6 cảm biến phải
    sensor1[0]=digitalRead(33);
    sensor1[1]=digitalRead(32);
    sensor1[2]=digitalRead(31);
    sensor1[3]=digitalRead(30);
    sensor1[4]=digitalRead(29);
    sensor1[5]=digitalRead(28);
  }
  //lệch phải
  if     ((sensor[0]==0)&&(sensor[1]==0)&&(sensor[2]==0)&&(sensor[3]==0)&&(sensor[4]==0)&&(sensor[5]==1)) error= 5;
  else if((sensor[0]==0)&&(sensor[1]==0)&&(sensor[2]==0)&&(sensor[3]==0)&&(sensor[4]==1)&&(sensor[5]==1)) error= 4;
  else if((sensor[0]==0)&&(sensor[1]==0)&&(sensor[2]==0)&&(sensor[3]==0)&&(sensor[4]==1)&&(sensor[5]==0)) error= 3;
  else if((sensor[0]==0)&&(sensor[1]==0)&&(sensor[2]==0)&&(sensor[3]==1)&&(sensor[4]==1)&&(sensor[5]==0)) error= 2;
  else if((sensor[0]==0)&&(sensor[1]==0)&&(sensor[2]==0)&&(sensor[3]==1)&&(sensor[4]==0)&&(sensor[5]==0)) error= 1;
  //ở giữa
  else if((sensor[0]==0)&&(sensor[1]==0)&&(sensor[2]==1)&&(sensor[3]==1)&&(sensor[4]==0)&&(sensor[5]==0)) error=0;
  //lệch trái
  else if((sensor[0]==0)&&(sensor[1]==0)&&(sensor[2]==1)&&(sensor[3]==0)&&(sensor[4]==0)&&(sensor[5]==0)) error=-1;
  else if((sensor[0]==0)&&(sensor[1]==1)&&(sensor[2]==1)&&(sensor[3]==0)&&(sensor[4]==0)&&(sensor[5]==0)) error=-2;
  else if((sensor[0]==0)&&(sensor[1]==1)&&(sensor[2]==0)&&(sensor[3]==0)&&(sensor[4]==0)&&(sensor[5]==0)) error=-3;
  else if((sensor[0]==1)&&(sensor[1]==1)&&(sensor[2]==0)&&(sensor[3]==0)&&(sensor[4]==0)&&(sensor[5]==0)) error=-4;
  else if((sensor[0]==1)&&(sensor[1]==0)&&(sensor[2]==0)&&(sensor[3]==0)&&(sensor[4]==0)&&(sensor[5]==0)) error=-5;
  //trường hợp khác
  else  error = 0;
  
  //lệch phải
  if     ((sensor1[0]==0)&&(sensor1[1]==0)&&(sensor1[2]==0)&&(sensor1[3]==0)&&(sensor1[4]==0)&&(sensor1[5]==1)) error1= 5;
  else if((sensor1[0]==0)&&(sensor1[1]==0)&&(sensor1[2]==0)&&(sensor1[3]==0)&&(sensor1[4]==1)&&(sensor1[5]==1)) error1= 4;
  else if((sensor1[0]==0)&&(sensor1[1]==0)&&(sensor1[2]==0)&&(sensor1[3]==0)&&(sensor1[4]==1)&&(sensor1[5]==0)) error1= 3;
  else if((sensor1[0]==0)&&(sensor1[1]==0)&&(sensor1[2]==0)&&(sensor1[3]==1)&&(sensor1[4]==1)&&(sensor1[5]==0)) error1= 2;
  else if((sensor1[0]==0)&&(sensor1[1]==0)&&(sensor1[2]==0)&&(sensor1[3]==1)&&(sensor1[4]==0)&&(sensor1[5]==0)) error1= 1;
  //ở giữa
  else if((sensor1[0]==0)&&(sensor1[1]==0)&&(sensor1[2]==1)&&(sensor1[3]==1)&&(sensor1[4]==0)&&(sensor1[5]==0)) error1=0;
  //lệch trái
  else if((sensor1[0]==0)&&(sensor1[1]==0)&&(sensor1[2]==1)&&(sensor1[3]==0)&&(sensor1[4]==0)&&(sensor1[5]==0)) error1=-1;
  else if((sensor1[0]==0)&&(sensor1[1]==1)&&(sensor1[2]==1)&&(sensor1[3]==0)&&(sensor1[4]==0)&&(sensor1[5]==0)) error1=-2;
  else if((sensor1[0]==0)&&(sensor1[1]==1)&&(sensor1[2]==0)&&(sensor1[3]==0)&&(sensor1[4]==0)&&(sensor1[5]==0)) error1=-3;
  else if((sensor1[0]==1)&&(sensor1[1]==1)&&(sensor1[2]==0)&&(sensor1[3]==0)&&(sensor1[4]==0)&&(sensor1[5]==0)) error1=-4;
  else if((sensor1[0]==1)&&(sensor1[1]==0)&&(sensor1[2]==0)&&(sensor1[3]==0)&&(sensor1[4]==0)&&(sensor1[5]==0)) error1=-5;
  //trường hợp khác
  else  error1 = 0;
}
