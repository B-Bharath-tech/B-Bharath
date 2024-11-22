{
  "nbformat": 4,
  "nbformat_minor": 0,
  "metadata": {
    "colab": {
      "provenance": [],
      "authorship_tag": "ABX9TyO0XcX9d28FsYDrv8Ro3kcM",
      "include_colab_link": true
    },
    "kernelspec": {
      "name": "python3",
      "display_name": "Python 3"
    },
    "language_info": {
      "name": "python"
    }
  },
  "cells": [
    {
      "cell_type": "markdown",
      "metadata": {
        "id": "view-in-github",
        "colab_type": "text"
      },
      "source": [
        "<a href=\"https://colab.research.google.com/github/B-Bharath-tech/B-Bharath/blob/main/Untitled0.c\" target=\"_parent\"><img src=\"https://colab.research.google.com/assets/colab-badge.svg\" alt=\"Open In Colab\"/></a>"
      ]
    },
    {
      "cell_type": "code",
      "execution_count": null,
      "metadata": {
        "id": "8_E85B89sHMF"
      },
      "outputs": [],
      "source": [
        "#include <stdio.h>\n",
        "\n",
        "int main() {\n",
        "    int number;\n",
        "\n",
        "    // Ask the user for input\n",
        "    printf(\"Enter a number: \");\n",
        "    scanf(\"%d\", &number);\n",
        "\n",
        "    // Check if the number is even or odd\n",
        "    if (number % 2 == 0) {\n",
        "        printf(\"%d is even.\\n\", number);\n",
        "    } else {\n",
        "        printf(\"%d is odd.\\n\", number);\n",
        "    }\n",
        "\n",
        "    return 0;\n",
        "}\n"
      ]
    }
  ]
}