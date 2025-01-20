<h1><center>Controle de Pinos GPIO - BitDogLab 💻</center></h1> 

<p>Este projeto tem como objetivo o controle de pinos GPIO do microcontrolador <strong>RP2040</strong> da ferramenta educacional <strong>BitDogLab</strong> usando a interface UART. Através deste sistema, o usuário pode controlar um conjunto de periféricos conectados ao BitDogLab, como LEDs RGB e um buzzer.</p>

<h2>Objetivo</h2>
    <p>O projeto tem como meta implementar um sistema de controle que permite ao usuário ligar e desligar LEDs RGB (vermelho, verde e azul) e acionar um buzzer, tudo isso por meio de comandos enviados via terminal serial (USB) utilizando o software <strong>PuTTY</strong>.</p>
    <h2>Funções e Membros</h2>
<table border="1">
    <tr>
        <td>Líder: </td>
        <td>Mariana Barretto</td>
    </tr>
    <tr>
        <td>Criação do Repositório, Estrutura do Código, Vídeos e Ajustes : </td>
        <td>Mariana Barretto</td>
    </tr>
    <tr>
        <td>Leds: </td>
        <td>Alexandro Soares</td>
    </tr>
    <tr>
        <td>Diagram.json: </td>
        <td>Helen Santos</td>
    </tr>
    <tr>
        <td>Leds: </td>
        <td>Edna Rodrigues</td>
    </tr>
    <tr>
        <td>Buzzer: </td>
        <td>Daniel Santos</td>
    </tr>  
    <tr>
        <td>Readme: </td>
        <td>Lucas Moreira</td>
    </tr>  
</table>
    <h2>🖥️ Tecnologias Utilizadas</h2>
<ul>
    <li><h4>📌 C</h4></li>
    <li><h4>📌 VSCode</h4></li>
    <li><h4>📌 Putty</h4></li>
</ul>
    <h2>Comandos Disponíveis</h2>
    <table border="1">
        <tr>
            <td><strong>VERDE</strong></td>
            <td>Liga o LED verde e desliga os outros LEDs.</td>
        </tr>
        <tr>
            <td><strong>AZUL</strong></td>
            <td>Liga o LED azul e desliga os outros LEDs.</td>
        </tr>
        <tr>
            <td><strong>VERMELHO</strong></td>
            <td>Liga o LED vermelho e desliga os outros LEDs.</td>
        </tr>
        <tr>
            <td><strong>BRANCO</strong></td>
            <td>Liga os três LEDs simultaneamente (luz branca).</td>
        </tr>
        <tr>
            <td><strong>DESLIGAR</strong></td>
            <td>Desliga todos os LEDs.</td>
        </tr>
        <tr>
            <td><strong>BUZZER</strong></td>
            <td>Aciona o buzzer por 2 segundos (sinal sonoro).</td>
        </tr>
    </table>
<h2>Estrutura do Código</h2>
    <p>O código é escrito na linguagem C, utilizando o <strong>Pico SDK</strong>, e foi desenvolvido para rodar no microcontrolador RP2040. Ele é responsável por configurar os pinos GPIO para controlar os LEDs e o buzzer, bem como receber e interpretar os comandos do usuário via terminal UART.</p>
    <h2>Arquitetura</h2>
    <table>
        <tr>
            <td><strong>GPIO 11 (LED Verde)</strong></td>
            <td>Controla o LED verde.</td>
        </tr>
        <tr>
            <td><strong>GPIO 12 (LED Azul)</strong></td>
            <td>Controla o LED azul.</td>
        </tr>
        <tr>
            <td><strong>GPIO 13 (LED Vermelho)</strong></td>
            <td>Controla o LED vermelho.</td>
        </tr>
        <tr>
            <td><strong>GPIO 21 (Buzzer)</strong></td>
            <td>Aciona o buzzer para gerar sinal sonoro.</td>
        </tr>
    </table>
<h2>Funcionamento</h2>
    <p>Ao conectar o dispositivo ao computador, o terminal serial é iniciado e o usuário pode enviar comandos específicos. O microcontrolador recebe esses comandos e aciona os periféricos de acordo com a instrução recebida. Por exemplo, ao digitar o comando "VERDE", o LED verde será aceso, e ao digitar "BUZZER", o buzzer será acionado por 2 segundos.</p>
    <h2>Configuração do Ambiente de Desenvolvimento</h2>
    <p>O projeto foi desenvolvido utilizando o <strong>VS Code</strong> com a integração do <strong>Wokwi</strong> para simulação do hardware. A construção do código foi feita com o auxílio do <strong>Raspberry Pi Pico SDK</strong> e a comunicação com o dispositivo é feita via <strong>USB</strong> utilizando a interface UART.</p>
    <h2>Como Executar</h2>
    <ol>
        <li>Clone o repositório do projeto: <code>git clone <repo_url></code></li>
        <li>Abra o projeto no VS Code e configure o ambiente de desenvolvimento com o Pico SDK.</li>
        <li>Compile o código e faça o upload para a placa RP2040 utilizando o CMake.</li>
        <li>Conecte o dispositivo ao computador e abra o terminal PuTTY configurado para a comunicação serial.</li>
        <li>Digite os comandos no terminal para controlar os LEDs e o buzzer.</li>
    </ol>

<h2>Link do Vídeo do Projeto</h2>

<h3>BitDogLab</h3>
<p>Google Drive: https://drive.google.com/file/d/1lKkZQgzId6iK95NOCLKXaFj8471cbTta/view?usp=sharing</p>

<p>YouTube: https://youtu.be/vQeb7yUgJFA</p>


   <h1>Como Executar o Projeto</h1>
        <h2>Clone o Repositório</h2>
    <ol>
        <li>Abra o <strong>Prompt de Comando</strong> ou o terminal de sua preferência.</li>
        <li>Clone o repositório usando o Git:
            <pre><code>git clone https://github.com/seu-usuario/seu-repositorio.git</code></pre>
        </li>
        <li>Entre no diretório do projeto:
            <pre><code>cd seu-repositorio</code></pre>
        </li>
    </ol>
    <h2>Compilar o Projeto</h2>
    <p>Após configurar o ambiente, compile o projeto executando o seguinte comando dentro do diretório <code>build</code>:</p>
    <pre><code>make</code></pre>
    <p>Isso criará o arquivo binário do programa, geralmente no formato <code>.uf2</code>.</p>
   <h2>Testando o Projeto</h2>
    <ul>
        <li>No Putty, digite as palavras disponíveis.</li>
        <li>Observe os LEDs RGB para respostas visuais.</li>
        <li>Ouça o som emitido pelo buzzer para ações específicas.</li>
    </ul>



