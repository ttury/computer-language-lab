PERIOD = 10
PRINCIPAL = 5000.00
amount = PRINCIPAL
interest_rate = 0.11
year = 0

def compute_interest(amount, interest_rate):
  return amount + interest_rate * amount

while (year <= PERIOD):
  print(year, amount)
  amount = compute_interest(amount, interest_rate)
  year += 1