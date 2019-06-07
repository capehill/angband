/**
 * \file list-player-timed.h
 * \brief timed player properties
 *
 * Fields:
 * symbol - the effect name
 * flag_redraw - the things to be redrawn when the effect is set
 * flag_update - the things to be updated when the effect is set
 */

/* symbol		flag_redraw						flag_update */
TMD(FAST,		PR_STATUS,						PU_BONUS)
TMD(SLOW,		PR_STATUS,								PU_BONUS)
TMD(BLIND,		PR_MAP,							PU_UPDATE_VIEW | PU_MONSTERS) 
TMD(PARALYZED,	PR_STATUS,						PU_BONUS)
TMD(CONFUSED,	PR_STATUS,						PU_BONUS)
TMD(AFRAID,		PR_STATUS,						PU_BONUS)
TMD(IMAGE,		PR_MAP | PR_MONLIST | PR_ITEMLIST,	PU_BONUS)
TMD(POISONED,	PR_STATUS,						PU_BONUS)
TMD(CUT,		PR_STATUS,						PU_BONUS)
TMD(STUN,		PR_STATUS,						PU_BONUS)
TMD(FOOD,		PR_STATUS,						PU_BONUS)
TMD(PROTEVIL,	PR_STATUS,						PU_BONUS)
TMD(INVULN,		PR_STATUS,						PU_BONUS)
TMD(HERO,		PR_STATUS,						PU_BONUS)
TMD(SHERO,		PR_STATUS,						PU_BONUS)
TMD(SHIELD,		PR_STATUS,						PU_BONUS)
TMD(BLESSED,	PR_STATUS,						PU_BONUS)
TMD(SINVIS,		PR_STATUS,						PU_BONUS | PU_MONSTERS)
TMD(SINFRA,		PR_STATUS,						PU_BONUS | PU_MONSTERS)
TMD(OPP_ACID,	PR_STATUS,						PU_BONUS)
TMD(OPP_ELEC,	PR_STATUS,						PU_BONUS)
TMD(OPP_FIRE,	PR_STATUS,						PU_BONUS)
TMD(OPP_COLD,	PR_STATUS,						PU_BONUS)
TMD(OPP_POIS,	PR_STATUS,						PU_BONUS)
TMD(OPP_CONF,	PR_STATUS,						PU_BONUS)
TMD(AMNESIA,	PR_STATUS,						PU_BONUS)
TMD(TELEPATHY,	PR_STATUS,						PU_BONUS)
TMD(STONESKIN,	PR_STATUS,						PU_BONUS)
TMD(TERROR,		PR_STATUS,						PU_BONUS)
TMD(SPRINT,		PR_STATUS,						PU_BONUS)
TMD(BOLD,		PR_STATUS,						PU_BONUS)
TMD(SCRAMBLE,   PR_STATUS,		   				PU_BONUS)
TMD(TRAPSAFE,	PR_STATUS,						PU_BONUS)
TMD(FASTCAST,	PR_STATUS,						PU_BONUS)
TMD(ATT_ACID,	PR_STATUS,						PU_BONUS)
TMD(ATT_ELEC,	PR_STATUS,						PU_BONUS)
TMD(ATT_FIRE,	PR_STATUS,						PU_BONUS)
TMD(ATT_COLD,	PR_STATUS,						PU_BONUS)
TMD(ATT_POIS,	PR_STATUS,						PU_BONUS)
TMD(ATT_CONF,	PR_STATUS,						PU_BONUS)
TMD(ATT_EVIL,	PR_STATUS,						PU_BONUS)
TMD(ATT_DEMON,	PR_STATUS,						PU_BONUS)
TMD(ATT_VAMP,	PR_STATUS,						PU_BONUS)
TMD(HEAL,		PR_STATUS,						PU_BONUS)
TMD(COMMAND,	PR_STATUS,						PU_BONUS)
TMD(ATT_RUN,	PR_STATUS,						PU_BONUS)
TMD(SCENTLESS,	PR_STATUS,						PU_BONUS)
TMD(POWERSHOT,	PR_STATUS,						PU_BONUS)
TMD(POWERBLOW,	PR_STATUS,						PU_BONUS)
TMD(BLOODLUST,	PR_STATUS,						PU_BONUS)
TMD(BLACKBREATH,PR_STATUS,						PU_BONUS)
