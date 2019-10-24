
/* Grammar interface */

#ifndef Py_GRAMMAR_H
#define Py_GRAMMAR_H
#ifdef __cplusplus
extern "C" {
#endif

#include "bitset.h" /* Sigh... */

/* A label of an arc */

typedef struct {
<<<<<<< HEAD
    int          lb_type;
    char        *lb_str;
} label;

#define EMPTY 0         /* Label number 0 is by definition the empty label */
=======
    int		 lb_type;
    char	*lb_str;
} label;

#define EMPTY 0		/* Label number 0 is by definition the empty label */
>>>>>>> 73921da00deaf52c46c591e7cf1f6c7e6f6daa65

/* A list of labels */

typedef struct {
<<<<<<< HEAD
    int          ll_nlabels;
    label       *ll_label;
=======
    int		 ll_nlabels;
    label	*ll_label;
>>>>>>> 73921da00deaf52c46c591e7cf1f6c7e6f6daa65
} labellist;

/* An arc from one state to another */

typedef struct {
<<<<<<< HEAD
    short       a_lbl;          /* Label of this arc */
    short       a_arrow;        /* State where this arc goes to */
=======
    short	a_lbl;		/* Label of this arc */
    short	a_arrow;	/* State where this arc goes to */
>>>>>>> 73921da00deaf52c46c591e7cf1f6c7e6f6daa65
} arc;

/* A state in a DFA */

typedef struct {
<<<<<<< HEAD
    int          s_narcs;
    arc         *s_arc;         /* Array of arcs */

    /* Optional accelerators */
    int          s_lower;       /* Lowest label index */
    int          s_upper;       /* Highest label index */
    int         *s_accel;       /* Accelerator */
    int          s_accept;      /* Nonzero for accepting state */
=======
    int		 s_narcs;
    arc		*s_arc;		/* Array of arcs */

    /* Optional accelerators */
    int		 s_lower;	/* Lowest label index */
    int		 s_upper;	/* Highest label index */
    int		*s_accel;	/* Accelerator */
    int		 s_accept;	/* Nonzero for accepting state */
>>>>>>> 73921da00deaf52c46c591e7cf1f6c7e6f6daa65
} state;

/* A DFA */

typedef struct {
<<<<<<< HEAD
    int          d_type;        /* Non-terminal this represents */
    char        *d_name;        /* For printing */
    int          d_initial;     /* Initial state */
    int          d_nstates;
    state       *d_state;       /* Array of states */
    bitset       d_first;
=======
    int		 d_type;	/* Non-terminal this represents */
    char	*d_name;	/* For printing */
    int		 d_initial;	/* Initial state */
    int		 d_nstates;
    state	*d_state;	/* Array of states */
    bitset	 d_first;
>>>>>>> 73921da00deaf52c46c591e7cf1f6c7e6f6daa65
} dfa;

/* A grammar */

typedef struct {
<<<<<<< HEAD
    int          g_ndfas;
    dfa         *g_dfa;         /* Array of DFAs */
    labellist    g_ll;
    int          g_start;       /* Start symbol of the grammar */
    int          g_accel;       /* Set if accelerators present */
=======
    int		 g_ndfas;
    dfa		*g_dfa;		/* Array of DFAs */
    labellist	 g_ll;
    int		 g_start;	/* Start symbol of the grammar */
    int		 g_accel;	/* Set if accelerators present */
>>>>>>> 73921da00deaf52c46c591e7cf1f6c7e6f6daa65
} grammar;

/* FUNCTIONS */

grammar *newgrammar(int start);
void freegrammar(grammar *g);
dfa *adddfa(grammar *g, int type, const char *name);
int addstate(dfa *d);
void addarc(dfa *d, int from, int to, int lbl);
dfa *PyGrammar_FindDFA(grammar *g, int type);

int addlabel(labellist *ll, int type, const char *str);
int findlabel(labellist *ll, int type, const char *str);
const char *PyGrammar_LabelRepr(label *lb);
void translatelabels(grammar *g);

void addfirstsets(grammar *g);

void PyGrammar_AddAccelerators(grammar *g);
void PyGrammar_RemoveAccelerators(grammar *);

void printgrammar(grammar *g, FILE *fp);
void printnonterminals(grammar *g, FILE *fp);

#ifdef __cplusplus
}
#endif
#endif /* !Py_GRAMMAR_H */
