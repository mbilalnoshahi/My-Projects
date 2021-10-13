module HA(input a,input b,output s, output c); // Half Adder

and a1(c,a,b); // use AND gate
xor x1(s,a,b); // use XOR gate

endmodule

module FA(input a,input b,input cin,output sum, output carry); //Full Adder

wire w1,w2,w3; 

HA h1(a,b,w1,w2);  // Call above half adder here
HA h2(w1,cin,sum,w3); // Call above half adder here

or p1(carry,w2,w3);  //use OR gate

endmodule

module P_G_Generator(a,b,p,g); //P&G Generator which takes a,b as inputs and p,g as outputs

input [7:0]a;
input [7:0]b;
output [7:0]p;
output [7:0]g;

HA h1(a[0],b[0],p[0],g[0]); //Call Half adder to generate p & g
HA h2(a[1],b[1],p[1],g[1]);

HA h3(a[2],b[2],p[2],g[2]);
HA h4(a[3],b[3],p[3],g[3]);

HA h5(a[4],b[4],p[4],g[4]);
HA h6(a[5],b[5],p[5],g[5]);

HA h7(a[6],b[6],p[6],g[6]);
HA h8(a[7],b[7],p[7],g[7]); ////Call Half adder upto here to generate p & g

endmodule

module test_Pg();

reg [7:0]a;
reg [7:0]b;
wire [7:0]p;
wire [7:0]g;

P_G_Generator m1(a,b,p,g);

initial 
begin

#5 a=8'b0001100; b=8'b0011100; 
#35 a=8'b1001100; b=8'b1011100;

end
endmodule


module Carry_Generator(p,g,cin,c0,c1,c2,c3,c4,c5,c6,c7,c8); //Carry generator has 3 inputs and 9 outputs

input [7:0]p;
input [7:0]g;
input cin;
output c0,c1,c2,c3,c4,c5,c6,c7,c8;

wire w1,w2,w3,w4,w5,w6,w7,w8;

assign c0=cin; //assigning value of cin to c0


and a1(w1,cin,p[0]); //For c1
or p1(c1,w1,g[0]);

and a2(w2,c1,p[1]); //For c2
or p2(c2,w2,g[1]);

and a3(w3,c2,p[2]);   //For c3
or p3(c3,w3,g[2]);

and a4(w4,c3,p[3]);  //For c4
or p4(c4,w4,g[3]);

and a5(w5,c4,p[4]);  //For c5
or p5(c5,w5,g[4]);

and a6(w6,c5,p[5]);  //For c6
or p6(c6,w6,g[5]);

and a7(w7,c6,p[6]);   //For c7
or p7(c7,w7,g[6]);

and a8(w8,c7,p[7]);  //For c8
or p8(c8,w8,g[7]);


endmodule


module test_Carry();

reg [7:0]p;
reg [7:0]g;
reg cin;
wire c0,c1,c2,c3,c4,c5,c6,c7,c8;

Carry_Generator h1(p,g,cin,c0,c1,c2,c3,c4,c5,c6,c7,c8);

initial 
begin

#5 p=8'b0001100; g=8'b0011100; 
#35 p=8'b1001100; g=8'b1011100;

end
endmodule





module Adder(p,c0,c1,c2,c3,c4,c5,c6,c7,sum); //Adder module, contains XOR gates in the circuit

input [7:0]p;
input c0,c1,c2,c3,c4,c5,c6,c7;
output [7:0]sum;


xor x1(sum[0],p[0],c0); //Take output p (P&G gen) and c0-c7(carry_gen) to calculate sum
xor x2(sum[1],p[1],c1);
xor x3(sum[2],p[2],c2);
xor x4(sum[3],p[3],c3);
xor x5(sum[4],p[4],c4);
xor x6(sum[5],p[5],c5);
xor x7(sum[6],p[6],c6);
xor x8(sum[7],p[7],c7); //upto here

endmodule



module test_Add();

reg [7:0]p;
wire [7:0]sum;

reg c0,c1,c2,c3,c4,c5,c6,c7;

Adder a1(p,c0,c1,c2,c3,c4,c5,c6,c7,sum);

initial 
begin

#5 p=8'b0001100; c0=1;c1=1;c2=0;c3=1;c4=0;c5=0;c6=1;c7=1; 
#35 p=8'b1001100; c0=0;c1=1;c2=1;c3=1;c4=0;c5=0;c6=1;c7=1;

end
endmodule




module main(a,b,cin,sum,cout); // This is the main module

input [7:0]a;
input [7:0]b;

input cin;
output cout;

output [7:0]sum;


wire [7:0]w1;
wire [7:0]w2;
wire w3,w4,w5,w6,w7,w8,w9,w10,w11,w12;

P_G_Generator g1(a,b,w1,w2); //taking 8-bits(a,b) inputs and store the result in 8-bits(w1,w2)
Carry_Generator g2(w1,w2,cin,w3,w4,w5,w6,w7,w8,w9,w10,cout); //taking 8bits(w1,w2) and cin then generate caries
Adder a1(w1,w3,w4,w5,w6,w7,w8,w9,w10,sum); //take w1(8bit) and 8 caries to calculate sum(result)


endmodule





module test_main(); //test main

reg [7:0]a;
reg [7:0]b;
wire [7:0]sum;

reg cin;
wire cout;

main m1(a,b,cin,sum,cout);  //call the module named as main

initial 
begin

#5 a=8'b0001100; b=8'b0011100; cin=0; //gives the inputs to get outputs in waveform 
#35 a=8'b1001100; b=8'b1011100; cin=0;

end
endmodule 