void read_me()
  {
      sw();                           //--------->>> คำสั่งรอปุ่มกด
      bz(100);                        //--------->>> คำสั่งเปิดเสียง  
      rgb(0, 1, 0);                   //--------->>> คำสั่งเปิด ปิด led RGB
      Motor(30, 30);                  //--------->>> คำสั่งควบคุมการทำงานของมอเตอร์
      Motor(-30, -30); 
      
      mcp_f(0);                       //--------->>> คำสั่งแสดงค่าของ sensor แผงหน้าที่อ่านได้ ขณะนั้น mcp_f(0 - 7);
      md_mcp_f(0);                    //--------->>> คำสั่งแสดงค่ากลางของ sensor  md_mcp_f(0 - 7);
      max_mcp_f(0);                   //--------->>> คำสั่งแสดงค่าสูงสุดของ sensor  max_mcp_f(0 - 7);
      min_mcp_f(0);                   //--------->>> คำสั่งแสดงค่าต่ำสุดของ sensor  min_mcp_f(0 - 7);

      mcp_b(0);                       //--------->>> คำสั่งแสดงค่าของ sensor แผงหลังที่อ่านได้ ขณะนั้น mcp_f(0 - 7);
      md_mcp_b(0);                    //--------->>> คำสั่งแสดงค่ากลางของ sensor  md_mcp_b(0 - 7); 
      max_mcp_b(0);                   //--------->>> คำสั่งแสดงค่าสูงสุดของ sensor  max_mcp_b(0 - 7);
      min_mcp_b(0);                   //--------->>> คำสั่งแสดงค่าต่ำสุดของ sensor  min_mcp_b(0 - 7);

      analogRead(26);                 //--------->>> คำสั่งแสดงค่าของ sensor ใต้ท้อง  analogRead(26 - 27);
      md_adc(26);                     //--------->>> คำสั่งแสดงค่ากลางของ sensor ใต้ท้อง  md_adc(26 - 27); 

      servo(23,90);                   //--------->>> คำสั่งควบคุมการทำงาน servo servo(23,90);  พารามิเตอร์ ตัวที่ 1 ประกอบด้วย 23, 8, 7, 29 และ 28
                                      //--------->>>  พารามิเตอร์ ตัวที่ 2 ใส่ค่าตั้งแต่  0 -180

      fline(50,50,0.4,0,'n','l',80, "a2", 30);  //--------->>> คำสั่ง หุ่นยนต์เดินตามเส้นไปข้างหน้า
      bline(40,40,0.4,0,'c','p',80, "a5", 30);  //--------->>> คำสั่ง หุ่นยนต์เดินตามเส้นเดินถอยหลัง
      
      fline_white(40,40,0.4,0,'c','l',80, "a2", 30);  //--------->>> คำสั่ง หุ่นยนต์เดินตามเส้นไปข้างหน้า เส้นขาวพื้นดำ
      bline_white(40,40,0.4,0,'c','l',80, "a2", 30);

      fline_setpoint(40,40,0.4, 50,"26", 30);   //  ----->> 50 คือ ตำแหน่งที่ต้องการเซต 0-100 / 50 อยู่ตรงกลาง
                                                //  ----->> a7 คือ เลือกเซนเซอร์ สำหรับเช็คเส้น  มี a0, a7, 26, 27, b0 และ b7
                                                //  ----->> 30 คือ ค่าสำหรับเบรค ถ้าเป็น 0 จะไม่เบรค
      bline_setpoint(40,40,0.4, 50,"a7", 30);         
           
      fline_2sensor(35, 35, 0.5, 0, "3:4","a7", 'p', 0);  // คำสั่งเลือกเดินตามเส้น แค่ 2 เซนเซอร์ เลือกเซนเซอร์ในการเช็คเส้น เหมือน fline_setpoint
                                                           // แต่สามารถเลือกหยุดหรือข้าม โดยใช้ 's' คือ หยุด  'p' คือข้าม
                                                           // 30 คือ ค่าสำหรับเบรค ถ้าเป็น 0 จะไม่เบรค
                                                           // "a0"  "a7" "b0"  "a7"  "26"  "27"
/*
      servo_up_open();      //------> มือขึ้น กางมือ
      servo_down_open();    //------> มือลง กางมือ
      servo_up_close();     //------> มือขึ้น หุบมือ
      servo_down_close();   //------> มือลง หุบมือ
      servo_big();          //------> คีบกล่องใหญ่

      mission_L();    //------> หมุนวางซ้าย
      mission_R();    //------> หมุนวางขวา

      mission_L_M();  //------> หมุนวางซ้าย ลึก
      mission_R_M();  //------> หมุนวางซ้าย ลึก
      mission(30, 30, 0.2, 200, "big"); 
      mission(30, 30, 0.2, 200, "small");  
  */
      arm_picR(50 ,75);    // ตัวแปรที่ 1 คือ ความสูง   ตัวแปรที่ 2 คือ ระยะที่ยื่น


      fline_2sensor(35, 35, 0.5, 0, "5:6","b0", 'p', 30); 
      arm_picR(0, 65); sw();

      fline_2sensor(35, 35, 0.5, 0, "5:6","b0", 'p', 30);
      arm_picR(50 ,75); sw();

      
      arm_mission();sw();
      fline_2sensor(35, 35, 0.5, 0, "5:6","b0", 'p', 10);
  }
