
##############################
# Country definition for FRA #
##############################
province =
{ id         = 32
  anti_air   = 4
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 10 current_size = 10 }
}              # �u���X�g
province =
{ id         = 34
  anti_air   = 2
  naval_base = { size = 6 current_size = 6 }
}              # �����A��
province =
{ id         = 35
  anti_air   = 2
  naval_base = { size = 6 current_size = 6 }
}              # �i���g
province =
{ id         = 38
  anti_air   = 3
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 4 current_size = 4 }
}              # �V�F���u�[��
province = { id = 39 anti_air = 1 } # �J�[��
province =
{ id       = 44
  air_base = { size = 4 current_size = 4 }
  anti_air = 1
}            # ���[��
province =
{ id       = 56
  anti_air = 5
  air_base = { size = 10 current_size = 10 }
}            # �p��
province =
{ id         = 59
  anti_air   = 4
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 6 current_size = 6 }
}              # �{���h�[
province =
{ id       = 60
  air_base = { size = 4 current_size = 4 }
}            # �|���`�G
province =
{ id       = 62
  air_base = { size = 4 current_size = 4 }
}            # �I�����A��
province =
{ id       = 72
  anti_air = 3
  air_base = { size = 10 current_size = 10 }
  landfort = 10
}            # ���X
province = { id = 73 anti_air = 2 landfort = 10 } # �X�g���X�u�[��
province =
{ id       = 360
  anti_air = 1
  air_base = { size = 2 current_size = 2 }
}            # ���B�V�[
province =
{ id         = 364
  anti_air   = 3
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 4 current_size = 4 }
}              # �}���Z�C��
province =
{ id          = 365
  anti_air    = 5
  air_base    = { size = 4 current_size = 4 }
  naval_base  = { size = 10 current_size = 10 }
  landfort    = 3
  coastalfort = 2
}               # �g�D�[����
province = { id = 366 landfort = 3 } # �j�[�X

#####################
# Country main data #
#####################

country =
{ tag                 = FRA
  manpower            = 4250
  energy              = 58000
  metal               = 36000
  rare_materials      = 45000
  oil                 = 12000
  supplies            = 8000
  money               = 3500
  capital             = 56
  transports          = 1800
  escorts             = 1500
  regular_id          = U02
  nationalprovinces   = { 18 32 33 34 35 36 37 38 39 40 41 42 43 44 54 55 56 57 58 59 60 61 62 63 64 72 73 316 317 318 319 320 321 322 323 
                         324 325 326 327 328 358 359 360 361 362 363 364 365 366 367 527 528 529 841 1022 1643 1676 2242 2509 2514 2555 2557 }
  ownedprovinces      = { 18 32 33 34 35 36 37 38 39 40 41 42 43 44 54 55 56 57 58 59 60 61 62 63 64 72 73 316 317 318 319 320 321 322 323 
                         324 325 326 327 328 358 359 360 361 362 363 364 365 366 367 527 528 529 841 1022 1643 1676 2242 2509 2514 2555 2557 1037 875 }
  controlledprovinces = { 18 32 33 34 35 36 37 38 39 40 41 42 43 44 54 55 56 57 58 59 60 61 62 63 64 72 73 316 317 318 319 320 321 322 323 
                         324 325 326 327 328 358 359 360 361 362 363 364 365 366 367 527 528 529 841 1022 1643 1676 2242 2509 2514 2555 2557 1037 875 }
  techapps            = { 
                         1130 1230 1570 1670 1770 1870 1970
                         2010 2020 2030 2040 2050 2310 2320 2610 2620 2910 2920 10050 10060 1010  10190 1020  10200 1030    1110  1120 
                          1210  1220  1470  1490  1510  1530  1550  1560  1650  1660
                          1750  1760  1850  1860  1950  1960
                          3010  3020  30410 30420 30510 30520 3110 
                          3120  3210  3220  3460  3470  40200 40210  3310  3320  3610  3620  3710  3720  7500  7510  7520  7530  7540  7670  7680  7690  7700
                          3560      3910  3920
                          3940  40100 40110 4390  4400  4010  4020  4110  4120  4210  4220  4640  4650  4820  4830
                          4560  50020 50030   50070 50080  5010    50090 50100 5020  50290 50300 50310
                          5090  5100  5170  5180  5250  5260  5330  5340  5410  5420
                          5490  5500  5600  5610  5680  5690  5760  5770  5780  5790  5800  5810
                          5910  5920  7010  80080 80090 8010  80100 80160 8020  8030  8040  8050  8060  8070  8280  8290  8300  8310  8320  8330  9010  90140
                          90190 9020  9030  9040  9050  9060  9070  9190  9200  9210  9340  9350  9360  9370  9380  9390  9400  9520  9530  9540 
                          9550  9670  9680  9690  9700  9710  9720  9840  9850  9860  9990  2000  2210  3000  4000  5000  7030  7040
                          6130  6120  6340  6350
                        }
  inventions          = { 8009 8011 }
  policy =
  { democratic        = 10
    political_left    = 2
    freedom           = 9
    free_market       = 9
    professional_army = 9
    defense_lobby     = 10
    interventionism   = 9
  }
  landunit =
  { id       = { type = 25001 id = 105 }
    name     = "�h�C�c��t�����X�A�����c"
    location = 73
    division =
    { id            = { type = 25001 id = 106 }
      name          = "��82��p�@�b���"
      model         = 4
      brigade_model = 3
      type          = paratrooper
      extra         = artillery
      strength      = 100
    }
    division =
    { id            = { type = 25001 id = 107 }
      name          = "��83��p�@�b���"
      model         = 4
      brigade_model = 0
      type          = paratrooper
      strength      = 100
    }
    division =
    { id            = { type = 25001 id = 108 }
      name          = "��84��p�@�b���"
      model         = 4
      brigade_model = 0
      type          = paratrooper
      strength      = 100
    }
    division =
    { id            = { type = 25001 id = 109 }
      name          = "��85��p�@�b���"
      model         = 4
      brigade_model = 0
      type          = paratrooper
      strength      = 100
    }
    division =
    { id            = { type = 25001 id = 110 }
      name          = "��33��p�@�b���"
      model         = 4
      brigade_model = 0
      type          = paratrooper
      strength      = 100
    }
    division =
    { id            = { type = 25001 id = 111 }
      name          = "��61��p�@�b���"
      model         = 4
      brigade_model = 0
      type          = paratrooper
      strength      = 100
    }
    division =
    { id            = { type = 25001 id = 112 }
      name          = "��44��p�@�b���"
      model         = 5
      brigade_model = 0
      type          = paratrooper
      strength      = 100
    }
    division =
    { id            = { type = 25001 id = 113 }
      name          = "��131��p�@���"
      model         = 1
      brigade_model = 0
      type          = infantry
      strength      = 100
    }
    division =
    { id            = { type = 25001 id = 114 }
      name          = "��52��ԑ��"
      model         = 3
      brigade_model = 0
      type          = armor
      strength      = 100
    }
    division =
    { id            = { type = 25001 id = 115 }
      name          = "��55��ԑ��"
      model         = 3
      brigade_model = 0
      type          = armor
      strength      = 100
    }
    division =
    { id            = { type = 25001 id = 116 }
      name          = "��33�@�B���������"
      model         = 3
      brigade_model = 0
      type          = mechanized
      strength      = 100
    }
    division =
    { id            = { type = 25001 id = 117 }
      name          = "��36�@�B���������"
      model         = 3
      brigade_model = 0
      type          = mechanized
      strength      = 100
    }
  }
  landunit =
  { id       = { type = 25001 id = 118 }
    name     = "��4��p�@�b�t�c"
    location = 841
    division =
    { id            = { type = 25001 id = 119 }
      name          = "��1��p�@�b���"
      model         = 1
      brigade_model = 0
      type          = infantry
      extra         = artillery
      strength      = 100
    }
    division =
    { id            = { type = 25001 id = 120 }
      name          = "��2��p�@�b���"
      model         = 1
      brigade_model = 0
      type          = infantry
      strength      = 100
    }
    division =
    { id            = { type = 25001 id = 121 }
      name          = "��3��p�@�b���"
      model         = 1
      brigade_model = 0
      type          = infantry
      strength      = 100
    }
    division =
    { id            = { type = 25001 id = 122 }
      name          = "��4��p�@�b���"
      model         = 3
      brigade_model = 0
      type          = paratrooper
      strength      = 100
    }
    division =
    { id            = { type = 25001 id = 123 }
      name          = "��5��p�@�b���"
      model         = 3
      brigade_model = 0
      type          = paratrooper
      strength      = 100
    }
    division =
    { id            = { type = 25001 id = 124 }
      name          = "��6��p�@�b���"
      model         = 3
      brigade_model = 0
      type          = paratrooper
      strength      = 100
    }
    division =
    { id            = { type = 25001 id = 125 }
      name          = "��7��p�@�b���"
      model         = 3
      brigade_model = 0
      type          = paratrooper
      strength      = 100
    }
    division =
    { id            = { type = 25001 id = 126 }
      name          = "��8��p�@�b���"
      model         = 3
      brigade_model = 0
      type          = paratrooper
      strength      = 100
    }
    division =
    { id            = { type = 25001 id = 127 }
      name          = "��9��p�@�b���"
      model         = 3
      brigade_model = 0
      type          = paratrooper
      strength      = 100
    }
    division =
    { id            = { type = 25001 id = 128 }
      name          = "��1��ԑ��"
      model         = 3
      brigade_model = 0
      type          = armor
      strength      = 100
    }
    division =
    { id            = { type = 25001 id = 129 }
      name          = "��2��ԑ��"
      model         = 3
      brigade_model = 0
      type          = armor
      strength      = 100
    }
    division =
    { id            = { type = 25001 id = 130 }
      name          = "��3��ԑ��"
      model         = 3
      brigade_model = 0
      type          = armor
      strength      = 100
    }
  }
  landunit =
  { id       = { type = 25001 id = 131 }
    name     = "��5��p�@�b�t�c"
    location = 72
    division =
    { id            = { type = 25001 id = 132 }
      name          = "��10��p�@�b���"
      model         = 1
      brigade_model = 0
      type          = infantry
      extra         = artillery
      strength      = 100
    }
    division =
    { id            = { type = 25001 id = 133 }
      name          = "��11��p�@�b���"
      model         = 1
      brigade_model = 0
      type          = infantry
      strength      = 100
    }
    division =
    { id            = { type = 25001 id = 134 }
      name          = "��12��p�@�b���"
      model         = 1
      brigade_model = 0
      type          = infantry
      strength      = 100
    }
    division =
    { id            = { type = 25001 id = 135 }
      name          = "��13��p�@�b���"
      model         = 3
      brigade_model = 0
      type          = paratrooper
      strength      = 100
    }
    division =
    { id            = { type = 25001 id = 136 }
      name          = "��14��p�@�b���"
      model         = 3
      brigade_model = 0
      type          = paratrooper
      strength      = 100
    }
    division =
    { id            = { type = 25001 id = 137 }
      name          = "��15��p�@�b���"
      model         = 3
      brigade_model = 0
      type          = paratrooper
      strength      = 100
    }
    division =
    { id            = { type = 25001 id = 138 }
      name          = "��16��p�@�b���"
      model         = 3
      brigade_model = 0
      type          = paratrooper
      strength      = 100
    }
    division =
    { id            = { type = 25001 id = 139 }
      name          = "��17��p�@�b���"
      model         = 3
      brigade_model = 0
      type          = paratrooper
      strength      = 100
    }
    division =
    { id            = { type = 25001 id = 140 }
      name          = "��18��p�@�b���"
      model         = 3
      brigade_model = 0
      type          = paratrooper
      strength      = 100
    }
    division =
    { id            = { type = 25001 id = 141 }
      name          = "��4��ԑ��"
      model         = 3
      brigade_model = 0
      type          = armor
      strength      = 100
    }
    division =
    { id            = { type = 25001 id = 142 }
      name          = "��5��ԑ��"
      model         = 3
      brigade_model = 0
      type          = armor
      strength      = 100
    }
    division =
    { id            = { type = 25001 id = 143 }
      name          = "��6��ԑ��"
      model         = 3
      brigade_model = 0
      type          = armor
      strength      = 100
    }
  }
  landunit =
  { id       = { type = 25001 id = 144 }
    name     = "��3��p�@�b�t�c"
    location = 316
    division =
    { id            = { type = 25001 id = 145 }
      name          = "��19��p�@�b���"
      model         = 1
      brigade_model = 0
      type          = infantry
      extra         = artillery
      strength      = 100
    }
    division =
    { id            = { type = 25001 id = 146 }
      name          = "��20��p�@�b���"
      model         = 1
      brigade_model = 0
      type          = infantry
      strength      = 100
    }
    division =
    { id            = { type = 25001 id = 147 }
      name          = "��21��p�@�b���"
      model         = 1
      brigade_model = 0
      type          = infantry
      strength      = 100
    }
    division =
    { id            = { type = 25001 id = 148 }
      name          = "��22��p�@�b���"
      model         = 3
      brigade_model = 0
      type          = paratrooper
      strength      = 100
    }
    division =
    { id            = { type = 25001 id = 149 }
      name          = "��23��p�@�b���"
      model         = 3
      brigade_model = 0
      type          = paratrooper
      strength      = 100
    }
    division =
    { id            = { type = 25001 id = 150 }
      name          = "��24��p�@�b���"
      model         = 3
      brigade_model = 0
      type          = paratrooper
      strength      = 100
    }
    division =
    { id            = { type = 25001 id = 151 }
      name          = "��25��p�@�b���"
      model         = 3
      brigade_model = 0
      type          = paratrooper
      strength      = 100
    }
    division =
    { id            = { type = 25001 id = 152 }
      name          = "��26��p�@�b���"
      model         = 3
      brigade_model = 0
      type          = paratrooper
      strength      = 100
    }
    division =
    { id            = { type = 25001 id = 153 }
      name          = "��27��p�@�b���"
      model         = 3
      brigade_model = 0
      type          = paratrooper
      strength      = 100
    }
    division =
    { id            = { type = 25001 id = 154 }
      name          = "��7��ԑ��"
      model         = 3
      brigade_model = 0
      type          = armor
      strength      = 100
    }
    division =
    { id            = { type = 25001 id = 155 }
      name          = "��8��ԑ��"
      model         = 3
      brigade_model = 0
      type          = armor
      strength      = 100
    }
    division =
    { id            = { type = 25001 id = 156 }
      name          = "��9��ԑ��"
      model         = 3
      brigade_model = 0
      type          = armor
      strength      = 100
    }
  }
  landunit =
  { id       = { type = 25001 id = 157 }
    name     = "��7��p�@�b�t�c"
    location = 44
    division =
    { id            = { type = 25001 id = 158 }
      name          = "��28��p�@�b���"
      model         = 1
      brigade_model = 0
      type          = infantry
      extra         = artillery
      strength      = 100
    }
    division =
    { id            = { type = 25001 id = 159 }
      name          = "��29��p�@�b���"
      model         = 1
      brigade_model = 0
      type          = infantry
      strength      = 100
    }
    division =
    { id            = { type = 25001 id = 160 }
      name          = "��30��p�@�b���"
      model         = 1
      brigade_model = 0
      type          = infantry
      strength      = 100
    }
    division =
    { id            = { type = 25001 id = 161 }
      name          = "��31��p�@�b���"
      model         = 3
      brigade_model = 0
      type          = paratrooper
      strength      = 100
    }
    division =
    { id            = { type = 25001 id = 162 }
      name          = "��32��p�@�b���"
      model         = 3
      brigade_model = 0
      type          = paratrooper
      strength      = 100
    }
    division =
    { id            = { type = 25001 id = 163 }
      name          = "��33��p�@�b���"
      model         = 3
      brigade_model = 0
      type          = paratrooper
      strength      = 100
    }
    division =
    { id            = { type = 25001 id = 164 }
      name          = "��34��p�@�b���"
      model         = 3
      brigade_model = 0
      type          = paratrooper
      strength      = 100
    }
    division =
    { id            = { type = 25001 id = 165 }
      name          = "��35��p�@�b���"
      model         = 3
      brigade_model = 0
      type          = paratrooper
      strength      = 100
    }
    division =
    { id            = { type = 25001 id = 166 }
      name          = "��36��p�@�b���"
      model         = 3
      brigade_model = 0
      type          = paratrooper
      strength      = 100
    }
    division =
    { id            = { type = 25001 id = 167 }
      name          = "��10��ԑ��"
      model         = 3
      brigade_model = 0
      type          = armor
      strength      = 100
    }
    division =
    { id            = { type = 25001 id = 168 }
      name          = "��11��ԑ��"
      model         = 3
      brigade_model = 0
      type          = armor
      strength      = 100
    }
    division =
    { id            = { type = 25001 id = 169 }
      name          = "��12��ԑ��"
      model         = 3
      brigade_model = 0
      type          = armor
      strength      = 100
    }
  }
}
