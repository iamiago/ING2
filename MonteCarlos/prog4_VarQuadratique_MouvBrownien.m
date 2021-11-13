disp("Variation quadratique du Mouvement Brownien: ");
disp(" ");

T= 1;
N=1000;
Nmc=100;

VarQuadratique(T,N,Nmc);

function[] = VarQuadratique(T,N,Nmc)

W(1)=0;
variation_quadratique(1)=0;
variance=0;
esperance=0;
delta_t=T/N;

for j = 1 : Nmc
    t=(0:N)*delta_t;
        for i = 1 : N
            W_dt(i) = sqrt(delta_t)*randn;
            W(i+1) = W(i) +  W_dt(i);
            variation_quadratique(i+1) = variation_quadratique(i) + (W(i+1) - W(i))^2;
        end
    
    esperance= esperance + variation_quadratique(100);
    variance= variance+(variation_quadratique(100))^2;
    
    plot(t,variation_quadratique,'LineWidth',2);
    hold on;
    
end
    

hold on;
plot(t,t,'r','LineWidth',1); %objet non aléatoire
%plot(t,W);
esperance=esperance/Nmc;
variance=variance/Nmc- esperance^2;
disp("esperance: "+esperance+" | Variance: "+variance );

end