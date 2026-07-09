from hid_device import MacroPad
from config import ACTIONS
from actions import execute



pad = MacroPad()



while True:


    data = pad.read()


    if data:

        key = data[0]


        print(
            "Key:",
            key
        )


        if key in ACTIONS:

            execute(
                ACTIONS[key]
            )