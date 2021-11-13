Nmc = 20;
K = 100;
n = 300;
[esperance_Mn,M_Fk] = Martingale(K,n,Nmc);

function[p] = pas()
if rand() < 1/2
    p = 1;
else
    p = -1;
end 
end

function [M_fk,M] = Processus_M(K) %#ok<DEFNU,STOUT> 
M = zeros(K);
M(1) = 0;
for i =1:K-1
    M(i+1) = M(i) + pas();
end
plot(M);
M_fk = M(K);
end

function [esperance_Mn,M_fk] = Martingale(K,n,Nmc)
last_value = zeros(Nmc);
esperance_Mn = 0;
[M_fk,M] = Processus_M(K);
for j=1:Nmc
    for i=K:(n-1)
        M(i+1) = M(i) + pas();
    end
esperance_Mn = esperance_Mn + M(n);
end
esperance_Mn = esperance_Mn/Nmc;
disp("L'esperance vaut:");
disp(esperance_Mn);
disp("M_fk vaut:" );
disp(M_fk);
end