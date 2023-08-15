def cadastrar_carro(carros):
    nome = input("Digite o nome do carro: ")
    codigo = input("Digite o código do carro: ")
    ano = input("Digite o ano do carro: ")
    situacao = "disponível"
    carros[codigo] = [nome, ano, situacao]

def consultar_disponibilidade(carros):
    termo = input("Digite o termo de busca: ")
    resultados = []
    for codigo, carro in carros.items():
        if termo in codigo or termo in carro[0] or termo in carro[1] or termo in carro[2]:
            resultados.append((codigo, carro))
    if resultados:
        print("Resultados encontrados:")
        for codigo, carro in resultados:
            print(f"Código: {codigo}, Nome: {carro[0]}, Ano: {carro[1]}, Situação: {carro[2]}")
    else:
        print("Nenhum resultado encontrado.")

def emprestar_carro(carros):
    codigo = input("Digite o código do carro a ser emprestado: ")
    if codigo in carros:
        carro = carros[codigo]
        if carro[2] == "disponível":
            print("Dados do carro:")
            print(f"Código: {codigo}, Nome: {carro[0]}, Ano: {carro[1]}, Situação: {carro[2]}")
            confirmacao = input("Deseja confirmar o empréstimo? (s/n): ")
            if confirmacao.lower() == "s":
                carro[2] = "emprestado"
                print("Carro emprestado com sucesso.")
            else:
                print("Empréstimo cancelado.")
        else:
            print("Erro: O carro selecionado não está disponível para empréstimo.")
    else:
        print("Erro: Carro não encontrado.")

def cadastrar_locatario(carros):
    codigo = input("Digite o código do carro: ")
    if codigo in carros:
        carro = carros[codigo]
        if carro[2] == "emprestado":
            locatario = {}
            print("=== Cadastro do Locatário ===")
            locatario['nome'] = input("Nome: ")
            locatario['endereco'] = {}
            locatario['endereco']['rua'] = input("Rua: ")
            locatario['endereco']['numero'] = input("Número: ")
            locatario['endereco']['complemento'] = input("Complemento: ")
            locatario['endereco']['cep'] = input("CEP: ")
            locatario['endereco']['bairro'] = input("Bairro: ")
            locatario['endereco']['cidade'] = input("Cidade: ")
            locatario['endereco']['estado'] = input("Estado: ")
            locatario['cpf'] = input("CPF: ")
            locatario['email'] = input("E-mail: ")
            locatario['telefone'] = input("Telefone: ")
            locatario['informacoes_adicionais'] = input("Informações adicionais: ")
            carro['locatario'] = locatario
        else:
            print("Erro: O carro selecionado não está emprestado.")
    else:
        print("Erro: Carro não encontrado.")

def listar_carros(carros, situacao):
    print(f"Lista de carros {situacao}:")
    carros_encontrados = []
    for codigo, carro in carros.items():
        if carro[2] == situacao:
            carros_encontrados.append((codigo, carro))
    if carros_encontrados:
        for codigo, carro in carros_encontrados:
            print(f"Código: {codigo}, Nome: {carro[0]}, Ano: {carro[1]}, Situação: {carro[2]}")
    else:
        print("Nenhum carro encontrado.")

def menu():
    carros = {}

    while True:
        print("\n--- Sistema de Aluguel de Carros ---")
        print("1) Cadastrar carro")
        print("2) Consultar disponibilidade")
        print("3) Emprestar carro")
        print("4) Listar carros emprestados")
        print("5) Listar carros disponíveis")
        print("6) Cadastro de locatário")
        print("7) Sair")

        opcao = input("Digite o número da opção desejada: ")

        if opcao == "1":
            cadastrar_carro(carros)
        elif opcao == "2":
            consultar_disponibilidade(carros)
        elif opcao == "3":
            emprestar_carro(carros)
        elif opcao == "4":
            listar_carros(carros, "emprestado")
        elif opcao == "5":
            listar_carros(carros, "disponível")
        elif opcao == "6":
            cadastrar_locatario(carros)
        elif opcao == "7":
            print("\n####### ENCERRANDO O PEDIDO, OBRIGADO PELA PREFERÊNCIA!! #######")
            break
        else:
            print("Opção inválida. Por favor, digite novamente.")

menu()
