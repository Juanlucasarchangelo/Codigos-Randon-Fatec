#include<stdio.h>
#include<locale.h>
 int main()
{
    setlocale(LC_ALL, "");
    int te[20],processo[20],tempoEspera[20],turnaround[20],i,j,n,total=0,pos,temp;
    float mediaEspera,mediaRetorno;
    printf("--Simulação Algoritmo SJF Não premptivo--\n\n");
    printf("Digite o numero de processos:");
    scanf("%d",&n);
    printf("\nDigite o tempo de execução:\n");
    for(i=0;i<n;i++)
    {
        printf("p%d:",i+1);
        scanf("%d",&te[i]);
        processo[i]=i+1;
    }

    //sorting of burst times
    for(i=0;i<n;i++)
    {
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(te[j]<te[pos])
                pos=j;
        }
        temp=te[i];
        te[i]=te[pos];
        te[pos]=temp;
        temp=processo[i];
        processo[i]=processo[pos];
        processo[pos]=temp;
    }
    tempoEspera[0]=0;
    for(i=1;i<n;i++)
    {
        tempoEspera[i]=0;
        for(j=0;j<i;j++)
            tempoEspera[i]+=te[j];
        total+=tempoEspera[i];
    }
    mediaEspera=(float)total/n;
    total=0;
    printf("\nProcesso\t    Tempo Exeecução    \tTempo de Espera \tTurnaround ");
    for(i=0;i<n;i++)
    {
        turnaround[i]=te[i]+tempoEspera[i];
        total+=turnaround[i];
        printf("\np%d\t\t\t  %d\t\t\t    %d\t\t\t%d",processo[i],te[i],tempoEspera[i],turnaround[i]);
    }
    mediaRetorno=(float)total/n;
    printf("\n\Média Tempo Espera=%.2f",mediaEspera);
    printf("\nMédia Tempo Retorno=%.2f\n",mediaRetorno);
}
