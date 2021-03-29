void nanglen()
{
  for (a; a >= 0; a--) // 0 to 90
  {
    khop_duoi.write(a);
    delay(10);
  }
  
}
void haxuong() // 90 to 0
{
  for (a; a <= 90; a++)
  {
    khop_duoi.write(a);
    delay (10);
  }
}
void kep()
{
  
    khop_phai.write(150);
    khop_trai.write(85);
    
}
void tha()
{
  
    khop_phai.write(90);
    khop_trai.write(170);
}
void haxuong_mot()
{
  for (a1; a1 >= 0; a1--) // 0 to 90
  {
    khop_duoi_mot.write(a1);
    delay(10);
  }
  
}
void nanglen_mot() // 90 to 0
{
  for (a1; a1 <= 90; a1++)
  {
    khop_duoi_mot.write(a1);
    delay (10);
  }
}
void kep_mot()
{
  
    khop_phai_mot.write(150);
    khop_trai_mot.write(85);
    
}
void tha_mot()
{
  
    khop_phai_mot.write(90);
    khop_trai_mot.write(170);
}
