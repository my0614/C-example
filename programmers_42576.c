participant = ["min", "youn", "eden", "hloo"]
completion = ["eden","min","youn"]

def solution(participant, completion):
    participant.sort()
    completion.sort()
    print(participant)
    print(completion)

    for i in range(len(completion)):
        if participant[i] != completion[i]:
            print(participant[i])
            return participant[i]
    print(participant[len(participant)-1])       
    return (participant[len(participant)-1])

solution(participant,completion)

