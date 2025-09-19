/*
GoalException:
- jogador que recebeu a infração
- jogador que cometeu a infração
- tipo de infração
    - Falta:
    F_a[a][b]>0.7 (falta de a em b)
    F_b[b][a]>0.7 (falta de b em a)

    - Impedimento:
    p[a]>p[b], para todo b impedido por a
    p[b]>p[a], para todo a impedido por b

Goal
- jogador[0-10]
- time
- F_a
- F_b
- P(x,y)
*/