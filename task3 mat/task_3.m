%Fir implementation reference by values imported from Dsp C program.
%Here new insample is '5' placed in last position in state vector.
coeff=load('coeff.txt');
state=load('Task1_1.txt');
L=10;
step=0.1;
leakage=1;
H = adaptfilt.lms(L,step,leakage,coeff,state);
fprintf('The filterd output is\t %f\n',H(end));