void tinh_toan(float kp)
{
  P = error;
  I = I + error;
  D = error-previous_error;
  PID_value = (kp*P) + (ki*I) +(kd*D);//kp kd ki gia tri can dua ban dau <=255
  previous_error=error;

  P1 = error1;
  I1 = I1 + error1;
  D1 = error1-previous_error1;
  PID_value_1 = (kp*P1) + (ki*I1) +(kd*D1);//kp kd ki gia tri can dua ban dau <=255
  previous_error1=error1;
}
