camera {
	location < 0.0,  0.0,  1.5 >
	 up < 0.0,  1.0,  0.0 >
	 right < -1.3300000429153442,  0.0,  0.0 >
	 look_at < 0.0,  0.0,  0.0 >
	angle 60.0
}
background {
	color rgb < 1.0,  1.0,  1.0 >
}
light_source {
	  < 2.0,  1.0,  1.5 >
	color rgb < 1.0,  1.0,  1.0 >
}
light_source {
	  < 2.0,  1.0,  1.5 >
	color rgb < 1.0,  1.0,  1.0 >
}
union {
#declare crossPlane= <1,1,1>;
#declare visibleFinish = finish { reflection 0.3 phong 1 };
#declare invisibleFinish = finish { phong 0 };
#declare GDyingC1 = color rgb < 0.0 , 0.0 , 0.0 >;
#declare GDyingC1Finish = visibleFinish;
#declare GDyingC2 = color rgb < 0.0 , 0.0 , 0.0 >;
#declare GDyingC2Finish = visibleFinish;
#declare GDyingM1 = color rgb < 0.0 , 0.0 , 0.0 >;
#declare GDyingM1Finish = visibleFinish;
#declare GDyingM2 = color rgb < 0.0 , 0.0 , 0.0 >;
#declare GDyingM2Finish = visibleFinish;
#declare GDyingO1 = color rgb < 0.0 , 0.0 , 0.0 >;
#declare GDyingO1Finish = visibleFinish;
#declare Clostridium1 = color rgb < 0.0 , 1.0 , 0.0 >;
#declare Clostridium1Finish = visibleFinish;
#declare Clostridium2 = color rgb < 1.0 , 0.0 , 0.0 >;
#declare Clostridium2Finish = visibleFinish;
#declare Methanogen1 = color rgb < 0.0 , 0.0 , 1.0 >;
#declare Methanogen1Finish = visibleFinish;
#declare Methanogen2 = color rgb < 0.0 , 0.0 , 1.0 >;
#declare Methanogen2Finish = visibleFinish;
#declare Desulfovibrio = color rgb < 1.0 , 1.0 , 0.0 >;
#declare DesulfovibrioFinish = visibleFinish;
#declare OleateDegrader = color rgb < 1.0 , 0.0 , 0.0 >;
#declare OleateDegraderFinish = visibleFinish;
#declare GDyingD1 = color rgb < 0.0 , 0.0 , 0.0 >;
#declare GDyingD1Finish = visibleFinish;
#macro FinishMacro(loc, fin, col)
  #if(loc.x<=crossPlane.x & loc.y<=crossPlane.y & loc.z<=crossPlane.z)
	  pigment { col }
	  finish{ fin }
  #else
	  pigment { rgbt<1,1,1,1> }
	  finish { invisibleFinish }
  #end
#end