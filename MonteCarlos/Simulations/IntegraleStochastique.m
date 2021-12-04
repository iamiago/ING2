clc;
%disp("Appel de la fonction esperance integrale: " + Esperance_Integrale() );
%disp("Appel de la fonction Isometrie: " + Isometrie());
Esperance_Integrale();
Isometrie();
function [esp_integrale] = Esperance_Integrale()
disp("Fonction Esperance_Integrale");
N=100; NMC=100000; T=1; delta_t=T/N; esp=0;
W(1) =0;
t=(0:N)*delta_t;
Integrale(1) = 0;
%W = zeros(NMC); -> array exceeds maximum array size preference
%Integrale = zeros(NMC); -> same
for k=1:NMC
    I=0;
    for i=1:N
        W(i+1)=W(i)+t(i)*randn;
        I=I+W(i)*(W(i+1)-W(i));
    end
    esp=esp+I;
    Integrale(k) = I;
end
esp_integrale = mean(Integrale);
esp=esp/NMC;
disp(" esperance sans fonction mean : " + esp + newline+" esperance avec fonction mean : " + esp_integrale);

disp(" ");
end


function [esperance_Integrale_stoch_carre, esperance_Integrale_Teta] = Isometrie()
disp("Fonction Isometrie");
    function [f] = Teta(t,w)
        f=t^2*w^2 + sin(w) + t;
    end
N=100; NMC=100000; T=2; delta_t=T/N;
W(1) = 0;
t=(0:N)*delta_t;
 Integrale_stoch_carre(1) = 0;
 Integrale_Teta(1) = 0;

for k=1:NMC
    I_stoch = 0;
    I_Teta = 0;
    
    for i=1:N
        W(i+1) =  W(i) +  sqrt(delta_t)*randn;
        I_stoch = I_stoch + Teta(t(i),W(i)) * (W(i+1)-W(i));
        I_Teta = I_Teta + (Teta(t(i),W(i)))^2*delta_t;
    end
    
    Integrale_stoch_carre(k) = I_stoch^2;
    Integrale_Teta(k) = I_Teta;
    
end

esperance_Integrale_stoch_carre = mean(Integrale_stoch_carre);
esperance_Integrale_Teta =  mean(Integrale_Teta);
        
disp(" Esperance integrale stochastique carre : " + esperance_Integrale_stoch_carre);
disp(" Esperance integrale teta               : " + esperance_Integrale_Teta);
disp(" ");
end