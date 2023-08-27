 for(i=0;i<10;i++)//10 veces
 block;

 for(i=1;i<1000;i*=2)//10 veces en la iteracion 11 es 1024
 block;

 for(i=0;i<10;i++) //100 veces
 for(j=0; j<10;j++)
 block;

 for(i=0;i<10;i++) // 40 veces en en j se realiza 4 veces por cada i
 for(j=1; j<10;j*=2)
 block;

 for(i=1000;i>=1;i/=2) // 10 veces  (resuelto 500,250,125,,62,31,15,7,3,1,0 aproximando al menor)
 block;

 for(i=0;i<10;i++)
 for(j=0; j<=i;j++) //  se ejecuta 55 veces en cada vuelta es ->(1,2,3,4,5,6,7,8,9,10)
 block;