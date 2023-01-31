#include <cs50.h>
#include <stdio.h>

// Máximo de eleitores e candidatos
#define MAX_VOTERS 100
#define MAX_CANDIDATES 9

// preferences[i][j] é a jª preferência do eleitor i
int preferences[MAX_VOTERS][MAX_CANDIDATES];

// Os candidatos têm nome, contagem de votos e status eliminado
typedef struct {
  string name;
  int votes;
  bool eliminated;
} candidate;

// Array de candidatos
candidate candidates[MAX_CANDIDATES];

// Número de eleitores e candidatos
int voter_count;
int candidate_count;

// Protótipos de funções
bool vote(int voter, int rank, string name);
void tabulate(void);  // deve examinar todas as preferências dos eleitores e
                      // calcular os totais de votos atuais
bool print_winner(void);
int find_min(
    void);  // menor número de votos que alguém ainda na eleição recebeu
bool is_tie(int min);     // Todos empatados
void eliminate(int min);  // Último lugar eliminado

int main(int argc, string argv[]) {
  // Verifique se há uso inválido
  if (argc < 2) {
    printf("Usage: runoff [candidate ...]\n");
    return 1;
  }

  // Preencher array de candidatos
  candidate_count = argc - 1;
  if (candidate_count > MAX_CANDIDATES) {
    printf("Maximum number of candidates is %i\n", MAX_CANDIDATES);
    return 2;
  }
  for (int i = 0; i < candidate_count; i++) {
    candidates[i].name = argv[i + 1];
    candidates[i].votes = 0;
    candidates[i].eliminated = false;
  }

  voter_count = get_int("Number of voters: ");
  if (voter_count > MAX_VOTERS) {
    printf("Maximum number of voters is %i\n", MAX_VOTERS);
    return 3;
  }

  // LOOP PRINCIPAL
  // Para cada eleitor i até alcançar o número total de eleitor
  for (int i = 0; i < voter_count; i++) {
    // Para cada candidato j até alcançar o número total de candidatos
    for (int j = 0; j < candidate_count; j++) {
      string name = get_string("Rank %i: ", j + 1);

      // Se não for um voto válido, encerre o programa
      if (!vote(i, j, name)) {
        printf("Invalid vote.\n");
        return 4;
      }
    }

    printf("\n");
  }

  // Continue esperando votos até que o vencedor exista
  while (true) {
    // Calcular os votos dados aos candidatos restantes
    tabulate();

    // Verifique se a eleição foi vencida
    bool won = print_winner();
    if (won) {
      break;
    }

    // Elimine os últimos candidatos
    int min = find_min();
    bool tie = is_tie(min);

    // Se empatar, todos ganham
    if (tie) {
      for (int i = 0; i < candidate_count; i++) {
        if (!candidates[i].eliminated) {
          printf("%s\n", candidates[i].name);
        }
      }
      break;
    }

    // Elimine qualquer um com número mínimo de votos
    eliminate(min);

    // Redefinir contagem de votos de volta a zero
    for (int i = 0; i < candidate_count; i++) {
      candidates[i].votes = 0;
    }
  }
  return 0;
}

// Registre a preferência se o voto for válido
bool vote(int voter, int rank, string name) {
  // TODO
  return false;
}

// Tabelar votos para candidatos não eliminados
void tabulate(void) {
  // TODO
  return;
}

// Imprima o vencedor da eleição, se ele tiver mais de 50% dos votos
bool print_winner(void) {
  // TODO
  return false;
}

// Retorne o número mínimo de votos que qualquer candidato restante possui
int find_min(void) {
  // TODO
  return 0;
}

// Retorna verdadeiro se a eleição estiver empatada entre todos os candidatos,
// falso caso contrário
bool is_tie(int min) {
  // TODO
  return false;
}

// Eliminar o candidato (ou candidatos) em último lugar
void eliminate(int min) {
  // TODO
  return;
}