<h1>Controle de pinos GPIO da 
ferramenta educacional BitDogLab - Embarcatech 💻</h1> 

<p>Este projeto foi desenvolvido como parte da **Atividade 2 (Participativa)** do programa Embarcatech e tem como objetivo controlar pinos GPIO do microcontrolador RP2040 utilizando a ferramenta educacional BitDogLab. O controle é feito por meio de comandos enviados pela interface serial UART, utilizando o software PuTTY para comunicação..</p>

<h2>Componentes do Projeto</h2>

<ul>
  <li><strong>Teclado matricial 4x4: </strong>Utilizado para entrada de dados, com cada tecla mapeada para uma função específica.</li>
  <li><strong>LED RGB:</strong> Controlado para exibir diferentes cores ou combinações baseadas na entrada do teclado.</li>
  <li><strong>Buzzer: </strong>Emite sinais sonoros conforme a entrada recebida.</li>
  <li><strong>Microcontrolador Raspberry Pi Pico W: </strong>Central do projeto, que processa as entradas do teclado e controla os componentes conectados.</li>
  <li><strong>Software PuTTY: </strong>Para estabelecer comunicação com o microcontrolador.</li>
</ul> 

<h2>Funcionalidades</h2>

<ul>
	<li><strong>Controle de LEDs RGB:  </strong>Comandos UART permitem ativar/desativar os LEDs em diferentes combinações..
	<ul>
    <li><strong>Cores suportadas:
      <li>LED Verde (GPIO 11)</li>
      <li>LED Azul (GPIO 12)</li>
	  <li>LED Vermelho (GPIO 13)</li>
	  <li>Branco (todos os LEDs ligados) </li>
	  <li>odos os LEDs desligados</li>
    </ul>
	</li>
	<li><strong>Sinal Sonoro com o Buzzer: </strong>O comando UART ativa o buzzer conectado ao GPIO 21 por 2 segundos.
	</li>
	<li><strong>Interface Serial: </strong>Recebe comandos escritos no terminal e realiza as ações correspondentes.</li>	
    <ul>
    <li><strong>Comandos suportados: </strong> `VERDE`, `AZUL`, `VERMELHO`, `BRANCO`, `DESLIGAR`, `BUZZER`.
</ul>

<h2>Estrutura do Código</h2>

<ul>
	<li><strong>Configuração dos GPIOs:
    <ul>
    <li><strong> Inicialização dos pinos GPIO dos LEDs e do buzzer.
<ul>
    <li><strong> Configuração como saída.
</ul>
	<li><strong>Controle dos LEDs RGB:
<ul>
    <li><strong> Funções para ativar/desativar LEDs de acordo com o comando recebido.
</ul>
	<li><strong>Controle do Buzzer:
<ul>
    <li><strong> Função para emitir som por 2 segundos ao receber o comando correspondente.
</ul>
	<li><strong>Interface Serial:
<ul>
    <li><strong> Recebe comandos pela UART, processa-os e executa as ações nos periféricos conectados.
</ul>
</ul>
</ul>	

<h2>Tecnologias</h2>
<ul>
  <li><strong>Raspberry Pi Pico W</strong> - A placa de desenvolvimento baseada no microcontrolador que é a base do projeto.</li>
  <li><strong>Pico SDK</strong> - O kit de desenvolvimento de software da Raspberry Pi Pico para programar o RP2040.</li>
  <li><strong>Linguagem de Programação C</strong> - Utilizada para o desenvolvimento do código do projeto.</li>
  <li><strong>GPIO (General Purpose Input/Output)</strong> - Para interação com hardware externo, como o teclado matricial, LEDs e buzzer.</li>
  <li><strong>Teclado Matricial 4x4</strong> - Um componente para input de dados pelo usuário.</li>
  <li><strong>LED RGB</strong> - Utilizado para fornecer feedback visual com diferentes cores.</li>
  <li><strong>Buzzer</strong> - Para emitir sons de alerta ou feedback.</li>
  <li><strong>Wokwi</strong> - Simulador online para testar circuitos e projetos em microcontroladores, utilizado para a simulação e visualização do circuito.</li>
<li><strong>Wokwi Integrado ao Visual Studio Code</strong> - Wokwi integrado ao Visual Studio Code para testar circuitos e projetos em microcontroladores, utilizado para a simulação e visualização do circuito na prórpia IDE.</li>
  <li><strong>CMake</strong> - Ferramenta de automação de construção usada para gerenciar o processo de compilação do código.</li>
 <li><strong>PuTTY:</strong> - Software de terminal para envio de comandos UART.</li>
 </ul>

<h2>Link do Vídeo do Projeto</h2>

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
    <h2>Simulação no Wokwi</h2>
    <ol>
        <li>Abra o site do <a href="https://wokwi.com/" target="_blank">Wokwi</a>.</li>
        <li>Faça login ou crie uma conta gratuita.</li>
        <li>Crie um novo projeto simulando o hardware:
            <ul>
                <li>Adicione o <strong>Raspberry Pi Pico W</strong> no ambiente de simulação.</li>
                <li>Inclua os componentes necessários, como teclado matricial, LEDs RGB e buzzer, conectando-os corretamente.</li>
            </ul>
        </li>
        <li>Carregue o código do projeto no simulador:
            <pre><code># Cole seu código no editor C/C++ integrado no Wokwi.</code></pre>
        </li>
        <li>Execute a simulação e observe os resultados diretamente no ambiente Wokwi.</li>
    </ol>
    <h2>Configuração do Ambiente Local</h2>
    <ol>
        <li>Baixe e instale o <a href="https://cmake.org/download/" target="_blank">CMake</a>.</li>
        <li>Configure o <strong>Pico SDK</strong> seguindo o guia oficial em 
            <a href="https://datasheets.raspberrypi.com/pico/raspberry-pi-pico-c-sdk.pdf" target="_blank">
                Raspberry Pi Pico SDK</a>.
        </li>
        <li>Crie um diretório de construção:
            <pre><code>mkdir build</code></pre>
            <pre><code>cd build</code></pre>
        </li>
        <li>Execute o CMake para gerar os arquivos de construção:
            <pre><code>cmake ..</code></pre>
        </li>
    </ol>
    <h2>Compilar o Projeto</h2>
    <p>Após configurar o ambiente, compile o projeto executando o seguinte comando dentro do diretório <code>build</code>:</p>
    <pre><code>make</code></pre>
    <p>Isso criará o arquivo binário do programa, geralmente no formato <code>.uf2</code>.</p>
   <h2>Testando o Projeto</h2>
    <ul>
        <li>Pressione as teclas no teclado matricial para interagir com o sistema.</li>
        <li>Observe os LEDs RGB para respostas visuais.</li>
        <li>Ouça o som emitido pelo buzzer para ações específicas.</li>
        <li>Verifique a interação com os componentes simulados e depure o código conforme necessário.</li>
    </ul>

