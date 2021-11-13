Nmc=20;
K=100;
N=300;

Martingale(Nmc,K,N);

function[f]=pas()
    if(rand()<1/2)
     f=1;
    else
     f=-1;
    end
end

function[M,MFK] = Processus_M(K)
M(1) = 0;
for i=1:K-1
    M(i+1) = M(i)+pas();
end
MFK=M(K);

end

function[] = MarchesAleatoires()
for i=1:20
    [M,~] = Processus_M(200);
    plot(M);
    hold on
end

end


function[] = Martingale(Nmc,K,N)
last_value=zeros(Nmc);
[M,MFK] = Processus_M(K);

esperance=0;
 esperance_2=0;
for j =1:Nmc
    for i = K:(N-1)
        M(i+1)= M(i) + pas();
    end 
    last_value(j)=M(N);
    
    esperance = esperance + M(N);
    esperance_2 = esperance_2 + M(N)^2;
end
esperance = esperance/Nmc;
var = esperance_2/Nmc - esperance^2;
disp("L'Esperance: ");
disp(esperance);
disp("La variance: ");
disp(var);
disp("M_fk vaut: ");
disp(MFK);
plot(M);



end


