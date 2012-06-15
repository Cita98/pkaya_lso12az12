#include "myconst.h"
#include "base.h"

/*TODO: per ora dummy handlers */

/* Handler per le System Call */
/* Invocate da extern unsigned int SYSCALL(number, arg1, arg2, arg3); */
void sysbp_handler()
{
	/* recupero il numero della CPU attuale */
	U32 prid = getPRID();
	/* puntatore alla OLD AREA per le SYSCALL/BP */
	state_t *OLDAREA = new_old_areas[prid][OLD_SYSBP];
	/* recupero i parametri della SYSCALL dalla OLDAREA */
	U32 num_syscall = OLDAREA->reg_a0;
	U32 arg1 		= OLDAREA->reg_a1;
	U32 arg2		= OLDAREA->reg_a2;
	U32 arg3		= OLDAREA->reg_a3;
	/* CPU->old->SysBp; */

	switch(num_syscall)
	{
		case CREATEPROCESS:
			break;
		case CREATEBROTHER:
			break;
		case TERMINATEPROCESS:
			break;
		case VERHOGEN:
			break;
		case PASSEREN:
			break;
		case GETCPUTIME:
			break;
		case WAITCLOCK:
			break;
		case WAITIO:
			break;
		case SPECPRGVEC:
			break;
		case SPECTLBVEC:
			break;
		case SPECSYSVEC:
			break;
		default:
			/* SOLLEVARE ERRORE */
			break;
	}
}

void trap_handler()
{

}

void tlb_handler()
{

}

void ints_handler()
{
	/* Determina da quale device è arrivato l'interrupt */
}
