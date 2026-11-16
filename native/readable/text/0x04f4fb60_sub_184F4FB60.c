// sub_4F4FB60
// rva 0x04f4fb60  size 6054  section .text  group text
// window base 0x184f4fb60: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F4FB60(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  int v10; // edx
  unsigned int v11; // ebx
  __int64 v13; // [rsp+0h] [rbp-8h] BYREF

  v7 = a5;
  if ( (unsigned __int64)&v13 <= *(_QWORD *)(v6 + 8) )
  {
    sub_1EB84E0(a1, a2, a3, a4: a5);
    goto LABEL_513;
  }
  v8 = *(unsigned __int16 *)(v5 + 2LL * ((unsigned __int16)a5 >> 5) + 377151500) | ((unsigned __int16)a5 >> 1) & 0xFu;
  if ( (unsigned int)v8 >= 0x17B0 )
  {
LABEL_513:
    sub_2771220(a1, a2, a3: (unsigned int)v8, a4: v7, a5: 6064);
    goto LABEL_514;
  }
  v9 = *(unsigned __int16 *)(v5 + 2 * v8 + 377155612) | (unsigned int)(v7 & 1);
  if ( (unsigned int)v9 >= 0x420 )
  {
LABEL_514:
    sub_2771220(a1, a2, a3: v9, a4: v7, a5: 1056);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_4F51320();
  }
  v10 = *(_DWORD *)(v5 + 4 * v9 + 377167756);
  if ( (v10 & 0x10000) == 0 )
  {
    v11 = v7;
    goto LABEL_7;
  }
  if ( (v10 & 0x7FC0000) != 0x7FC0000 )
  {
    v11 = v7 - ((32 * v10) >> 23);
    goto LABEL_7;
  }
  if ( (int)v7 >= 11526 )
  {
    if ( (int)v7 >= 43911 )
    {
      if ( (int)v7 >= 43940 )
      {
        if ( (int)v7 >= 43954 )
        {
          if ( (int)v7 >= 43961 )
          {
            if ( (int)v7 >= 43965 )
            {
              if ( (int)v7 > 43967 )
                goto LABEL_364;
              if ( (int)v7 >= 43967 )
              {
                v11 = 5103;
              }
              else if ( (_DWORD)v7 == 43965 )
              {
                v11 = 5101;
              }
              else
              {
                v11 = 5102;
              }
            }
            else if ( (int)v7 >= 43963 )
            {
              if ( (_DWORD)v7 == 43963 )
                v11 = 5099;
              else
                v11 = 5100;
            }
            else if ( (_DWORD)v7 == 43961 )
            {
              v11 = 5097;
            }
            else
            {
              v11 = 5098;
            }
          }
          else if ( (int)v7 >= 43958 )
          {
            if ( (int)v7 >= 43960 )
            {
              v11 = 5096;
            }
            else if ( (_DWORD)v7 == 43958 )
            {
              v11 = 5094;
            }
            else
            {
              v11 = 5095;
            }
          }
          else if ( (int)v7 >= 43956 )
          {
            if ( (_DWORD)v7 == 43956 )
              v11 = 5092;
            else
              v11 = 5093;
          }
          else if ( (_DWORD)v7 == 43954 )
          {
            v11 = 5090;
          }
          else
          {
            v11 = 5091;
          }
        }
        else if ( (int)v7 >= 43947 )
        {
          if ( (int)v7 >= 43951 )
          {
            if ( (int)v7 >= 43953 )
            {
              v11 = 5089;
            }
            else if ( (_DWORD)v7 == 43951 )
            {
              v11 = 5087;
            }
            else
            {
              v11 = 5088;
            }
          }
          else if ( (int)v7 >= 43949 )
          {
            if ( (_DWORD)v7 == 43949 )
              v11 = 5085;
            else
              v11 = 5086;
          }
          else if ( (_DWORD)v7 == 43947 )
          {
            v11 = 5083;
          }
          else
          {
            v11 = 5084;
          }
        }
        else if ( (int)v7 >= 43944 )
        {
          if ( (int)v7 >= 43946 )
          {
            v11 = 5082;
          }
          else if ( (_DWORD)v7 == 43944 )
          {
            v11 = 5080;
          }
          else
          {
            v11 = 5081;
          }
        }
        else if ( (int)v7 >= 43942 )
        {
          if ( (_DWORD)v7 == 43942 )
            v11 = 5078;
          else
            v11 = 5079;
        }
        else if ( (_DWORD)v7 == 43940 )
        {
          v11 = 5076;
        }
        else
        {
          v11 = 5077;
        }
      }
      else if ( (int)v7 >= 43926 )
      {
        if ( (int)v7 >= 43933 )
        {
          if ( (int)v7 >= 43937 )
          {
            if ( (int)v7 >= 43939 )
            {
              v11 = 5075;
            }
            else if ( (_DWORD)v7 == 43937 )
            {
              v11 = 5073;
            }
            else
            {
              v11 = 5074;
            }
          }
          else if ( (int)v7 >= 43935 )
          {
            if ( (_DWORD)v7 == 43935 )
              v11 = 5071;
            else
              v11 = 5072;
          }
          else if ( (_DWORD)v7 == 43933 )
          {
            v11 = 5069;
          }
          else
          {
            v11 = 5070;
          }
        }
        else if ( (int)v7 >= 43930 )
        {
          if ( (int)v7 >= 43932 )
          {
            v11 = 5068;
          }
          else if ( (_DWORD)v7 == 43930 )
          {
            v11 = 5066;
          }
          else
          {
            v11 = 5067;
          }
        }
        else if ( (int)v7 >= 43928 )
        {
          if ( (_DWORD)v7 == 43928 )
            v11 = 5064;
          else
            v11 = 5065;
        }
        else if ( (_DWORD)v7 == 43926 )
        {
          v11 = 5062;
        }
        else
        {
          v11 = 5063;
        }
      }
      else if ( (int)v7 >= 43919 )
      {
        if ( (int)v7 >= 43923 )
        {
          if ( (int)v7 >= 43925 )
          {
            v11 = 5061;
          }
          else if ( (_DWORD)v7 == 43923 )
          {
            v11 = 5059;
          }
          else
          {
            v11 = 5060;
          }
        }
        else if ( (int)v7 >= 43921 )
        {
          if ( (_DWORD)v7 == 43921 )
            v11 = 5057;
          else
            v11 = 5058;
        }
        else if ( (_DWORD)v7 == 43919 )
        {
          v11 = 5055;
        }
        else
        {
          v11 = 5056;
        }
      }
      else if ( (int)v7 >= 43915 )
      {
        if ( (int)v7 >= 43917 )
        {
          if ( (_DWORD)v7 == 43917 )
            v11 = 5053;
          else
            v11 = 5054;
        }
        else if ( (_DWORD)v7 == 43915 )
        {
          v11 = 5051;
        }
        else
        {
          v11 = 5052;
        }
      }
      else if ( (int)v7 >= 43913 )
      {
        if ( (_DWORD)v7 == 43913 )
          v11 = 5049;
        else
          v11 = 5050;
      }
      else if ( (_DWORD)v7 == 43911 )
      {
        v11 = 5047;
      }
      else
      {
        v11 = 5048;
      }
    }
    else if ( (int)v7 >= 11555 )
    {
      if ( (int)v7 >= 43897 )
      {
        if ( (int)v7 >= 43904 )
        {
          if ( (int)v7 >= 43908 )
          {
            if ( (int)v7 >= 43910 )
            {
              v11 = 5046;
            }
            else if ( (_DWORD)v7 == 43908 )
            {
              v11 = 5044;
            }
            else
            {
              v11 = 5045;
            }
          }
          else if ( (int)v7 >= 43906 )
          {
            if ( (_DWORD)v7 == 43906 )
              v11 = 5042;
            else
              v11 = 5043;
          }
          else if ( (_DWORD)v7 == 43904 )
          {
            v11 = 5040;
          }
          else
          {
            v11 = 5041;
          }
        }
        else if ( (int)v7 >= 43901 )
        {
          if ( (int)v7 >= 43903 )
          {
            v11 = 5039;
          }
          else if ( (_DWORD)v7 == 43901 )
          {
            v11 = 5037;
          }
          else
          {
            v11 = 5038;
          }
        }
        else if ( (int)v7 >= 43899 )
        {
          if ( (_DWORD)v7 == 43899 )
            v11 = 5035;
          else
            v11 = 5036;
        }
        else if ( (_DWORD)v7 == 43897 )
        {
          v11 = 5033;
        }
        else
        {
          v11 = 5034;
        }
      }
      else if ( (int)v7 >= 43890 )
      {
        if ( (int)v7 >= 43894 )
        {
          if ( (int)v7 >= 43896 )
          {
            v11 = 5032;
          }
          else if ( (_DWORD)v7 == 43894 )
          {
            v11 = 5030;
          }
          else
          {
            v11 = 5031;
          }
        }
        else if ( (int)v7 >= 43892 )
        {
          if ( (_DWORD)v7 == 43892 )
            v11 = 5028;
          else
            v11 = 5029;
        }
        else if ( (_DWORD)v7 == 43890 )
        {
          v11 = 5026;
        }
        else
        {
          v11 = 5027;
        }
      }
      else if ( (int)v7 >= 11565 )
      {
        if ( (int)v7 < 43888 )
        {
          if ( (_DWORD)v7 == 11565 )
          {
            v11 = 4301;
            goto LABEL_7;
          }
          if ( (_DWORD)v7 == 43859 )
          {
            v11 = 42931;
            goto LABEL_7;
          }
          goto LABEL_364;
        }
        if ( (_DWORD)v7 == 43888 )
          v11 = 5024;
        else
          v11 = 5025;
      }
      else
      {
        if ( (int)v7 >= 11557 )
        {
          if ( (_DWORD)v7 == 11557 )
          {
            v11 = 4293;
            goto LABEL_7;
          }
          if ( (_DWORD)v7 == 11559 )
          {
            v11 = 4295;
            goto LABEL_7;
          }
          goto LABEL_364;
        }
        if ( (_DWORD)v7 == 11555 )
          v11 = 4291;
        else
          v11 = 4292;
      }
    }
    else if ( (int)v7 >= 11541 )
    {
      if ( (int)v7 >= 11548 )
      {
        if ( (int)v7 >= 11552 )
        {
          if ( (int)v7 >= 11554 )
          {
            v11 = 4290;
          }
          else if ( (_DWORD)v7 == 11552 )
          {
            v11 = 4288;
          }
          else
          {
            v11 = 4289;
          }
        }
        else if ( (int)v7 >= 11550 )
        {
          if ( (_DWORD)v7 == 11550 )
            v11 = 4286;
          else
            v11 = 4287;
        }
        else if ( (_DWORD)v7 == 11548 )
        {
          v11 = 4284;
        }
        else
        {
          v11 = 4285;
        }
      }
      else if ( (int)v7 >= 11545 )
      {
        if ( (int)v7 >= 11547 )
        {
          v11 = 4283;
        }
        else if ( (_DWORD)v7 == 11545 )
        {
          v11 = 4281;
        }
        else
        {
          v11 = 4282;
        }
      }
      else if ( (int)v7 >= 11543 )
      {
        if ( (_DWORD)v7 == 11543 )
          v11 = 4279;
        else
          v11 = 4280;
      }
      else if ( (_DWORD)v7 == 11541 )
      {
        v11 = 4277;
      }
      else
      {
        v11 = 4278;
      }
    }
    else if ( (int)v7 >= 11534 )
    {
      if ( (int)v7 >= 11538 )
      {
        if ( (int)v7 >= 11540 )
        {
          v11 = 4276;
        }
        else if ( (_DWORD)v7 == 11538 )
        {
          v11 = 4274;
        }
        else
        {
          v11 = 4275;
        }
      }
      else if ( (int)v7 >= 11536 )
      {
        if ( (_DWORD)v7 == 11536 )
          v11 = 4272;
        else
          v11 = 4273;
      }
      else if ( (_DWORD)v7 == 11534 )
      {
        v11 = 4270;
      }
      else
      {
        v11 = 4271;
      }
    }
    else if ( (int)v7 >= 11530 )
    {
      if ( (int)v7 >= 11532 )
      {
        if ( (_DWORD)v7 == 11532 )
          v11 = 4268;
        else
          v11 = 4269;
      }
      else if ( (_DWORD)v7 == 11530 )
      {
        v11 = 4266;
      }
      else
      {
        v11 = 4267;
      }
    }
    else if ( (int)v7 >= 11528 )
    {
      if ( (_DWORD)v7 == 11528 )
        v11 = 4264;
      else
        v11 = 4265;
    }
    else if ( (_DWORD)v7 == 11526 )
    {
      v11 = 4262;
    }
    else
    {
      v11 = 4263;
    }
  }
  else if ( (int)v7 >= 4341 )
  {
    if ( (int)v7 >= 8080 )
    {
      if ( (int)v7 >= 8102 )
      {
        if ( (int)v7 < 11366 )
        {
          if ( (int)v7 >= 8131 )
          {
            if ( (int)v7 >= 11365 )
            {
              v11 = 570;
              goto LABEL_7;
            }
            if ( (_DWORD)v7 == 8131 )
            {
              v11 = 8140;
              goto LABEL_7;
            }
            if ( (_DWORD)v7 == 8179 )
            {
              v11 = 8188;
              goto LABEL_7;
            }
          }
          else if ( (int)v7 >= 8115 )
          {
            if ( (_DWORD)v7 == 8115 )
            {
              v11 = 8124;
              goto LABEL_7;
            }
            if ( (_DWORD)v7 == 8126 )
            {
              v11 = 921;
              goto LABEL_7;
            }
          }
          else
          {
            if ( (_DWORD)v7 == 8102 )
            {
              v11 = 8110;
              goto LABEL_7;
            }
            if ( (_DWORD)v7 == 8103 )
            {
              v11 = 8111;
              goto LABEL_7;
            }
          }
          goto LABEL_364;
        }
        if ( (int)v7 >= 11523 )
        {
          if ( (int)v7 >= 11525 )
          {
            v11 = 4261;
          }
          else if ( (_DWORD)v7 == 11523 )
          {
            v11 = 4259;
          }
          else
          {
            v11 = 4260;
          }
        }
        else
        {
          if ( (int)v7 < 11521 )
          {
            if ( (_DWORD)v7 == 11366 )
            {
              v11 = 574;
              goto LABEL_7;
            }
            if ( (_DWORD)v7 == 11520 )
            {
              v11 = 4256;
              goto LABEL_7;
            }
            goto LABEL_364;
          }
          if ( (_DWORD)v7 == 11521 )
            v11 = 4257;
          else
            v11 = 4258;
        }
      }
      else if ( (int)v7 >= 8087 )
      {
        if ( (int)v7 >= 8099 )
        {
          if ( (int)v7 >= 8101 )
          {
            v11 = 8109;
          }
          else if ( (_DWORD)v7 == 8099 )
          {
            v11 = 8107;
          }
          else
          {
            v11 = 8108;
          }
        }
        else
        {
          if ( (int)v7 < 8097 )
          {
            if ( (_DWORD)v7 == 8087 )
            {
              v11 = 8095;
              goto LABEL_7;
            }
            if ( (_DWORD)v7 == 8096 )
            {
              v11 = 8104;
              goto LABEL_7;
            }
            goto LABEL_364;
          }
          if ( (_DWORD)v7 == 8097 )
            v11 = 8105;
          else
            v11 = 8106;
        }
      }
      else if ( (int)v7 >= 8084 )
      {
        if ( (int)v7 >= 8086 )
        {
          v11 = 8094;
        }
        else if ( (_DWORD)v7 == 8084 )
        {
          v11 = 8092;
        }
        else
        {
          v11 = 8093;
        }
      }
      else if ( (int)v7 >= 8082 )
      {
        if ( (_DWORD)v7 == 8082 )
          v11 = 8090;
        else
          v11 = 8091;
      }
      else if ( (_DWORD)v7 == 8080 )
      {
        v11 = 8088;
      }
      else
      {
        v11 = 8089;
      }
    }
    else if ( (int)v7 >= 7302 )
    {
      if ( (int)v7 >= 8065 )
      {
        if ( (int)v7 >= 8069 )
        {
          if ( (int)v7 > 8071 )
            goto LABEL_364;
          if ( (int)v7 >= 8071 )
          {
            v11 = 8079;
          }
          else if ( (_DWORD)v7 == 8069 )
          {
            v11 = 8077;
          }
          else
          {
            v11 = 8078;
          }
        }
        else if ( (int)v7 >= 8067 )
        {
          if ( (_DWORD)v7 == 8067 )
            v11 = 8075;
          else
            v11 = 8076;
        }
        else if ( (_DWORD)v7 == 8065 )
        {
          v11 = 8073;
        }
        else
        {
          v11 = 8074;
        }
      }
      else
      {
        if ( (int)v7 >= 7549 )
        {
          if ( (int)v7 >= 8064 )
          {
            v11 = 8072;
            goto LABEL_7;
          }
          if ( (_DWORD)v7 == 7549 )
          {
            v11 = 11363;
            goto LABEL_7;
          }
          if ( (_DWORD)v7 == 7566 )
          {
            v11 = 42950;
            goto LABEL_7;
          }
          goto LABEL_364;
        }
        if ( (int)v7 >= 7304 )
        {
          if ( (_DWORD)v7 == 7304 )
          {
            v11 = 42570;
            goto LABEL_7;
          }
          if ( (_DWORD)v7 == 7545 )
          {
            v11 = 42877;
            goto LABEL_7;
          }
          goto LABEL_364;
        }
        if ( (_DWORD)v7 == 7302 )
          v11 = 1066;
        else
          v11 = 1122;
      }
    }
    else if ( (int)v7 >= 4351 )
    {
      if ( (int)v7 >= 7299 )
      {
        if ( (int)v7 >= 7301 )
        {
          v11 = 1058;
        }
        else if ( (_DWORD)v7 == 7299 )
        {
          v11 = 1057;
        }
        else
        {
          v11 = 1058;
        }
      }
      else
      {
        if ( (int)v7 < 7297 )
        {
          if ( (_DWORD)v7 == 4351 )
          {
            v11 = 7359;
            goto LABEL_7;
          }
          if ( (_DWORD)v7 == 7296 )
          {
            v11 = 1042;
            goto LABEL_7;
          }
          goto LABEL_364;
        }
        if ( (_DWORD)v7 == 7297 )
          v11 = 1044;
        else
          v11 = 1054;
      }
    }
    else if ( (int)v7 >= 4345 )
    {
      if ( (int)v7 < 4349 )
      {
        if ( (_DWORD)v7 == 4345 )
        {
          v11 = 7353;
          goto LABEL_7;
        }
        if ( (_DWORD)v7 == 4346 )
        {
          v11 = 7354;
          goto LABEL_7;
        }
        goto LABEL_364;
      }
      if ( (_DWORD)v7 == 4349 )
        v11 = 7357;
      else
        v11 = 7358;
    }
    else if ( (int)v7 >= 4343 )
    {
      if ( (_DWORD)v7 == 4343 )
        v11 = 7351;
      else
        v11 = 7352;
    }
    else if ( (_DWORD)v7 == 4341 )
    {
      v11 = 7349;
    }
    else
    {
      v11 = 7350;
    }
  }
  else if ( (int)v7 >= 4312 )
  {
    if ( (int)v7 >= 4327 )
    {
      if ( (int)v7 >= 4334 )
      {
        if ( (int)v7 >= 4338 )
        {
          if ( (int)v7 >= 4340 )
          {
            v11 = 7348;
          }
          else if ( (_DWORD)v7 == 4338 )
          {
            v11 = 7346;
          }
          else
          {
            v11 = 7347;
          }
        }
        else if ( (int)v7 >= 4336 )
        {
          if ( (_DWORD)v7 == 4336 )
            v11 = 7344;
          else
            v11 = 7345;
        }
        else if ( (_DWORD)v7 == 4334 )
        {
          v11 = 7342;
        }
        else
        {
          v11 = 7343;
        }
      }
      else if ( (int)v7 >= 4331 )
      {
        if ( (int)v7 >= 4333 )
        {
          v11 = 7341;
        }
        else if ( (_DWORD)v7 == 4331 )
        {
          v11 = 7339;
        }
        else
        {
          v11 = 7340;
        }
      }
      else if ( (int)v7 >= 4329 )
      {
        if ( (_DWORD)v7 == 4329 )
          v11 = 7337;
        else
          v11 = 7338;
      }
      else if ( (_DWORD)v7 == 4327 )
      {
        v11 = 7335;
      }
      else
      {
        v11 = 7336;
      }
    }
    else if ( (int)v7 >= 4320 )
    {
      if ( (int)v7 >= 4324 )
      {
        if ( (int)v7 >= 4326 )
        {
          v11 = 7334;
        }
        else if ( (_DWORD)v7 == 4324 )
        {
          v11 = 7332;
        }
        else
        {
          v11 = 7333;
        }
      }
      else if ( (int)v7 >= 4322 )
      {
        if ( (_DWORD)v7 == 4322 )
          v11 = 7330;
        else
          v11 = 7331;
      }
      else if ( (_DWORD)v7 == 4320 )
      {
        v11 = 7328;
      }
      else
      {
        v11 = 7329;
      }
    }
    else if ( (int)v7 >= 4316 )
    {
      if ( (int)v7 >= 4318 )
      {
        if ( (_DWORD)v7 == 4318 )
          v11 = 7326;
        else
          v11 = 7327;
      }
      else if ( (_DWORD)v7 == 4316 )
      {
        v11 = 7324;
      }
      else
      {
        v11 = 7325;
      }
    }
    else if ( (int)v7 >= 4314 )
    {
      if ( (_DWORD)v7 == 4314 )
        v11 = 7322;
      else
        v11 = 7323;
    }
    else if ( (_DWORD)v7 == 4312 )
    {
      v11 = 7320;
    }
    else
    {
      v11 = 7321;
    }
  }
  else if ( (int)v7 >= 625 )
  {
    if ( (int)v7 < 4305 )
    {
      if ( (int)v7 >= 669 )
      {
        if ( (int)v7 >= 4304 )
        {
          v11 = 7312;
          goto LABEL_7;
        }
        if ( (_DWORD)v7 == 669 )
        {
          v11 = 42930;
          goto LABEL_7;
        }
        if ( (_DWORD)v7 == 670 )
        {
          v11 = 42928;
          goto LABEL_7;
        }
      }
      else if ( (int)v7 >= 642 )
      {
        if ( (_DWORD)v7 == 642 )
        {
          v11 = 42949;
          goto LABEL_7;
        }
        if ( (_DWORD)v7 == 647 )
        {
          v11 = 42929;
          goto LABEL_7;
        }
      }
      else
      {
        if ( (_DWORD)v7 == 625 )
        {
          v11 = 11374;
          goto LABEL_7;
        }
        if ( (_DWORD)v7 == 637 )
        {
          v11 = 11364;
          goto LABEL_7;
        }
      }
      goto LABEL_364;
    }
    if ( (int)v7 >= 4309 )
    {
      if ( (int)v7 >= 4311 )
      {
        v11 = 7319;
      }
      else if ( (_DWORD)v7 == 4309 )
      {
        v11 = 7317;
      }
      else
      {
        v11 = 7318;
      }
    }
    else if ( (int)v7 >= 4307 )
    {
      if ( (_DWORD)v7 == 4307 )
        v11 = 7315;
      else
        v11 = 7316;
    }
    else if ( (_DWORD)v7 == 4305 )
    {
      v11 = 7313;
    }
    else
    {
      v11 = 7314;
    }
  }
  else
  {
    if ( (int)v7 < 609 )
    {
      if ( (int)v7 < 592 )
      {
        if ( (int)v7 >= 575 )
        {
          if ( (_DWORD)v7 == 575 )
          {
            v11 = 11390;
            goto LABEL_7;
          }
          if ( (_DWORD)v7 == 576 )
          {
            v11 = 11391;
            goto LABEL_7;
          }
        }
        else
        {
          if ( (_DWORD)v7 == 383 )
          {
            v11 = 83;
            goto LABEL_7;
          }
          if ( (_DWORD)v7 == 411 )
          {
            v11 = 42972;
            goto LABEL_7;
          }
        }
        goto LABEL_364;
      }
      if ( (int)v7 <= 604 )
      {
        if ( (int)v7 >= 604 )
        {
          v11 = 42923;
          goto LABEL_7;
        }
        if ( (int)v7 <= 594 )
        {
          if ( (int)v7 >= 594 )
          {
            v11 = 11376;
          }
          else if ( (_DWORD)v7 == 592 )
          {
            v11 = 11375;
          }
          else
          {
            v11 = 11373;
          }
          goto LABEL_7;
        }
      }
      goto LABEL_364;
    }
    if ( (int)v7 < 618 )
    {
      if ( (int)v7 >= 613 )
      {
        if ( (_DWORD)v7 == 613 )
        {
          v11 = 42893;
          goto LABEL_7;
        }
        if ( (_DWORD)v7 == 614 )
        {
          v11 = 42922;
          goto LABEL_7;
        }
      }
      else
      {
        if ( (_DWORD)v7 == 609 )
        {
          v11 = 42924;
          goto LABEL_7;
        }
        if ( (_DWORD)v7 == 612 )
        {
          v11 = 42955;
          goto LABEL_7;
        }
      }
      goto LABEL_364;
    }
    if ( (int)v7 > 620 )
    {
LABEL_364:
      v11 = v7;
      goto LABEL_7;
    }
    if ( (int)v7 >= 620 )
    {
      v11 = 42925;
    }
    else if ( (_DWORD)v7 == 618 )
    {
      v11 = 42926;
    }
    else
    {
      v11 = 11362;
    }
  }
LABEL_7:
  if ( *(int *)(v6 + 16) <= 0 )
    sub_277F280();
  return v11;
}
