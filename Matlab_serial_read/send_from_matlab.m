%% init
% get  list of all serial ports on a system
seriallist 

% Get available COM port on your PC
arcom = getAvailableComPort(); 

% To specify properties during object creation
arduino = l(arcom,'BaudRate',9600,'DataBits',8);

% Connect serial port object to device
fopen(arduino);

% Write text to device
fprintf(arduino,'connected ?');

% create a sign to 
a_sign = 'a';
b_sign = 'b';
% create string includes data of 2 motors
sedata = strcat(speed_1,a_sign,speed_2,b_sign);

% send it as string
fprintf(arduino,'%s',sedata);

% to close
fclose(arduino);
delete arduino;