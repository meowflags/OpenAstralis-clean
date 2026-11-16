// sub_4F4E140
// rva 0x04f4e140  size 6335  section .text  group text
// window base 0x184f4e140: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F4E140(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v13; // [rsp+0h] [rbp-8h] BYREF

  v7 = a5;
  if ( (unsigned __int64)&v13 <= *(_QWORD *)(v6 + 8) )
  {
    sub_1EB84E0(a1, a2, a3, a4: a5);
    goto LABEL_524;
  }
  v8 = *(unsigned __int16 *)(v5 + 2LL * ((unsigned __int16)a5 >> 5) + 377151500) | ((unsigned __int16)a5 >> 1) & 0xFu;
  if ( (unsigned int)v8 >= 0x17B0 )
  {
LABEL_524:
    sub_2771220(a1, a2, a3: (unsigned int)v8, a4: v7, a5: 6064);
    goto LABEL_525;
  }
  v9 = *(unsigned __int16 *)(v5 + 2 * v8 + 377155612) | (unsigned int)(v7 & 1);
  if ( (unsigned int)v9 >= 0x420 )
  {
LABEL_525:
    sub_2771220(a1, a2, a3: v9, a4: v7, a5: 1056);
    __builtin_debugtrap();
    return sub_4F4FA00();
  }
  v10 = *(unsigned int *)(v5 + 4 * v9 + 377167756);
  if ( (v10 & 0x20000) == 0 )
  {
    v11 = (unsigned int)v7;
    goto LABEL_7;
  }
  if ( (v10 & 0x7FC0000) != 0x7FC0000 )
  {
    v11 = (unsigned int)(v7 + ((32 * (int)v10) >> 23));
    goto LABEL_7;
  }
  if ( (int)v7 >= 5092 )
  {
    if ( (int)v7 >= 7358 )
    {
      if ( (int)v7 >= 8188 )
      {
        if ( (int)v7 >= 42893 )
        {
          if ( (int)v7 >= 42929 )
          {
            if ( (int)v7 >= 42950 )
            {
              if ( (int)v7 <= 42972 )
              {
                if ( (int)v7 >= 42972 )
                {
                  v11 = 411;
                  goto LABEL_7;
                }
                if ( (_DWORD)v7 == 42950 )
                {
                  v11 = 7566;
                  goto LABEL_7;
                }
                if ( (_DWORD)v7 == 42955 )
                {
                  v11 = 612;
                  goto LABEL_7;
                }
              }
              goto LABEL_372;
            }
            if ( (int)v7 >= 42931 )
            {
              if ( (_DWORD)v7 == 42931 )
              {
                v11 = 43859;
                goto LABEL_7;
              }
              if ( (_DWORD)v7 == 42949 )
              {
                v11 = 642;
                goto LABEL_7;
              }
              goto LABEL_372;
            }
            if ( (_DWORD)v7 == 42929 )
              v11 = 647;
            else
              v11 = 669;
          }
          else
          {
            if ( (int)v7 >= 42925 )
            {
              if ( (int)v7 >= 42928 )
              {
                v11 = 670;
                goto LABEL_7;
              }
              if ( (_DWORD)v7 == 42925 )
              {
                v11 = 620;
                goto LABEL_7;
              }
              if ( (_DWORD)v7 == 42926 )
              {
                v11 = 618;
                goto LABEL_7;
              }
              goto LABEL_372;
            }
            if ( (int)v7 < 42923 )
            {
              if ( (_DWORD)v7 == 42893 )
              {
                v11 = 613;
                goto LABEL_7;
              }
              if ( (_DWORD)v7 == 42922 )
              {
                v11 = 614;
                goto LABEL_7;
              }
              goto LABEL_372;
            }
            if ( (_DWORD)v7 == 42923 )
              v11 = 604;
            else
              v11 = 609;
          }
        }
        else if ( (int)v7 >= 11374 )
        {
          if ( (int)v7 >= 11391 )
          {
            if ( (int)v7 <= 42877 )
            {
              if ( (int)v7 >= 42877 )
              {
                v11 = 7545;
                goto LABEL_7;
              }
              if ( (_DWORD)v7 == 11391 )
              {
                v11 = 576;
                goto LABEL_7;
              }
              if ( (_DWORD)v7 == 42570 )
              {
                v11 = 7304;
                goto LABEL_7;
              }
            }
            goto LABEL_372;
          }
          if ( (int)v7 >= 11376 )
          {
            if ( (_DWORD)v7 == 11376 )
            {
              v11 = 594;
              goto LABEL_7;
            }
            if ( (_DWORD)v7 == 11390 )
            {
              v11 = 575;
              goto LABEL_7;
            }
            goto LABEL_372;
          }
          if ( (_DWORD)v7 == 11374 )
            v11 = 625;
          else
            v11 = 592;
        }
        else
        {
          if ( (int)v7 < 11362 )
          {
            if ( (int)v7 >= 8490 )
            {
              if ( (_DWORD)v7 == 8490 )
              {
                v11 = 107;
                goto LABEL_7;
              }
              if ( (_DWORD)v7 == 8491 )
              {
                v11 = 229;
                goto LABEL_7;
              }
            }
            else
            {
              if ( (_DWORD)v7 == 8188 )
              {
                v11 = 8179;
                goto LABEL_7;
              }
              if ( (_DWORD)v7 == 8486 )
              {
                v11 = 969;
                goto LABEL_7;
              }
            }
            goto LABEL_372;
          }
          if ( (int)v7 >= 11364 )
          {
            if ( (_DWORD)v7 == 11364 )
            {
              v11 = 637;
              goto LABEL_7;
            }
            if ( (_DWORD)v7 == 11373 )
            {
              v11 = 593;
              goto LABEL_7;
            }
            goto LABEL_372;
          }
          if ( (_DWORD)v7 == 11362 )
            v11 = 619;
          else
            v11 = 7549;
        }
      }
      else if ( (int)v7 >= 8092 )
      {
        if ( (int)v7 >= 8107 )
        {
          if ( (int)v7 >= 8111 )
          {
            if ( (int)v7 <= 8140 )
            {
              if ( (int)v7 >= 8140 )
              {
                v11 = 8131;
                goto LABEL_7;
              }
              if ( (_DWORD)v7 == 8111 )
              {
                v11 = 8103;
                goto LABEL_7;
              }
              if ( (_DWORD)v7 == 8124 )
              {
                v11 = 8115;
                goto LABEL_7;
              }
            }
            goto LABEL_372;
          }
          if ( (int)v7 >= 8109 )
          {
            if ( (_DWORD)v7 == 8109 )
              v11 = 8101;
            else
              v11 = 8102;
          }
          else if ( (_DWORD)v7 == 8107 )
          {
            v11 = 8099;
          }
          else
          {
            v11 = 8100;
          }
        }
        else if ( (int)v7 >= 8104 )
        {
          if ( (int)v7 >= 8106 )
          {
            v11 = 8098;
          }
          else if ( (_DWORD)v7 == 8104 )
          {
            v11 = 8096;
          }
          else
          {
            v11 = 8097;
          }
        }
        else
        {
          if ( (int)v7 >= 8094 )
          {
            if ( (_DWORD)v7 == 8094 )
            {
              v11 = 8086;
              goto LABEL_7;
            }
            if ( (_DWORD)v7 == 8095 )
            {
              v11 = 8087;
              goto LABEL_7;
            }
            goto LABEL_372;
          }
          if ( (_DWORD)v7 == 8092 )
            v11 = 8084;
          else
            v11 = 8085;
        }
      }
      else if ( (int)v7 >= 8077 )
      {
        if ( (int)v7 >= 8089 )
        {
          if ( (int)v7 >= 8091 )
          {
            v11 = 8083;
          }
          else if ( (_DWORD)v7 == 8089 )
          {
            v11 = 8081;
          }
          else
          {
            v11 = 8082;
          }
        }
        else
        {
          if ( (int)v7 >= 8079 )
          {
            if ( (_DWORD)v7 == 8079 )
            {
              v11 = 8071;
              goto LABEL_7;
            }
            if ( (_DWORD)v7 == 8088 )
            {
              v11 = 8080;
              goto LABEL_7;
            }
            goto LABEL_372;
          }
          if ( (_DWORD)v7 == 8077 )
            v11 = 8069;
          else
            v11 = 8070;
        }
      }
      else
      {
        if ( (int)v7 < 8073 )
        {
          if ( (int)v7 >= 7838 )
          {
            if ( (_DWORD)v7 == 7838 )
            {
              v11 = 223;
              goto LABEL_7;
            }
            if ( (_DWORD)v7 == 8072 )
            {
              v11 = 8064;
              goto LABEL_7;
            }
          }
          else
          {
            if ( (_DWORD)v7 == 7358 )
            {
              v11 = 4350;
              goto LABEL_7;
            }
            if ( (_DWORD)v7 == 7359 )
            {
              v11 = 4351;
              goto LABEL_7;
            }
          }
          goto LABEL_372;
        }
        if ( (int)v7 >= 8075 )
        {
          if ( (_DWORD)v7 == 8075 )
            v11 = 8067;
          else
            v11 = 8068;
        }
        else if ( (_DWORD)v7 == 8073 )
        {
          v11 = 8065;
        }
        else
        {
          v11 = 8066;
        }
      }
    }
    else if ( (int)v7 >= 7329 )
    {
      if ( (int)v7 >= 7344 )
      {
        if ( (int)v7 >= 7351 )
        {
          if ( (int)v7 >= 7355 )
          {
            if ( (int)v7 >= 7357 )
            {
              v11 = 4349;
            }
            else if ( (_DWORD)v7 == 7355 )
            {
              v11 = 4347;
            }
            else
            {
              v11 = 4348;
            }
          }
          else if ( (int)v7 >= 7353 )
          {
            if ( (_DWORD)v7 == 7353 )
              v11 = 4345;
            else
              v11 = 4346;
          }
          else if ( (_DWORD)v7 == 7351 )
          {
            v11 = 4343;
          }
          else
          {
            v11 = 4344;
          }
        }
        else if ( (int)v7 >= 7348 )
        {
          if ( (int)v7 >= 7350 )
          {
            v11 = 4342;
          }
          else if ( (_DWORD)v7 == 7348 )
          {
            v11 = 4340;
          }
          else
          {
            v11 = 4341;
          }
        }
        else if ( (int)v7 >= 7346 )
        {
          if ( (_DWORD)v7 == 7346 )
            v11 = 4338;
          else
            v11 = 4339;
        }
        else if ( (_DWORD)v7 == 7344 )
        {
          v11 = 4336;
        }
        else
        {
          v11 = 4337;
        }
      }
      else if ( (int)v7 >= 7337 )
      {
        if ( (int)v7 >= 7341 )
        {
          if ( (int)v7 >= 7343 )
          {
            v11 = 4335;
          }
          else if ( (_DWORD)v7 == 7341 )
          {
            v11 = 4333;
          }
          else
          {
            v11 = 4334;
          }
        }
        else if ( (int)v7 >= 7339 )
        {
          if ( (_DWORD)v7 == 7339 )
            v11 = 4331;
          else
            v11 = 4332;
        }
        else if ( (_DWORD)v7 == 7337 )
        {
          v11 = 4329;
        }
        else
        {
          v11 = 4330;
        }
      }
      else if ( (int)v7 >= 7333 )
      {
        if ( (int)v7 >= 7335 )
        {
          if ( (_DWORD)v7 == 7335 )
            v11 = 4327;
          else
            v11 = 4328;
        }
        else if ( (_DWORD)v7 == 7333 )
        {
          v11 = 4325;
        }
        else
        {
          v11 = 4326;
        }
      }
      else if ( (int)v7 >= 7331 )
      {
        if ( (_DWORD)v7 == 7331 )
          v11 = 4323;
        else
          v11 = 4324;
      }
      else if ( (_DWORD)v7 == 7329 )
      {
        v11 = 4321;
      }
      else
      {
        v11 = 4322;
      }
    }
    else if ( (int)v7 >= 7315 )
    {
      if ( (int)v7 >= 7322 )
      {
        if ( (int)v7 >= 7326 )
        {
          if ( (int)v7 >= 7328 )
          {
            v11 = 4320;
          }
          else if ( (_DWORD)v7 == 7326 )
          {
            v11 = 4318;
          }
          else
          {
            v11 = 4319;
          }
        }
        else if ( (int)v7 >= 7324 )
        {
          if ( (_DWORD)v7 == 7324 )
            v11 = 4316;
          else
            v11 = 4317;
        }
        else if ( (_DWORD)v7 == 7322 )
        {
          v11 = 4314;
        }
        else
        {
          v11 = 4315;
        }
      }
      else if ( (int)v7 >= 7319 )
      {
        if ( (int)v7 >= 7321 )
        {
          v11 = 4313;
        }
        else if ( (_DWORD)v7 == 7319 )
        {
          v11 = 4311;
        }
        else
        {
          v11 = 4312;
        }
      }
      else if ( (int)v7 >= 7317 )
      {
        if ( (_DWORD)v7 == 7317 )
          v11 = 4309;
        else
          v11 = 4310;
      }
      else if ( (_DWORD)v7 == 7315 )
      {
        v11 = 4307;
      }
      else
      {
        v11 = 4308;
      }
    }
    else if ( (int)v7 >= 5100 )
    {
      if ( (int)v7 >= 7312 )
      {
        if ( (int)v7 >= 7314 )
        {
          v11 = 4306;
        }
        else if ( (_DWORD)v7 == 7312 )
        {
          v11 = 4304;
        }
        else
        {
          v11 = 4305;
        }
      }
      else
      {
        if ( (int)v7 >= 5102 )
        {
          if ( (_DWORD)v7 == 5102 )
          {
            v11 = 43966;
            goto LABEL_7;
          }
          if ( (_DWORD)v7 == 5103 )
          {
            v11 = 43967;
            goto LABEL_7;
          }
          goto LABEL_372;
        }
        if ( (_DWORD)v7 == 5100 )
          v11 = 43964;
        else
          v11 = 43965;
      }
    }
    else if ( (int)v7 >= 5096 )
    {
      if ( (int)v7 >= 5098 )
      {
        if ( (_DWORD)v7 == 5098 )
          v11 = 43962;
        else
          v11 = 43963;
      }
      else if ( (_DWORD)v7 == 5096 )
      {
        v11 = 43960;
      }
      else
      {
        v11 = 43961;
      }
    }
    else if ( (int)v7 >= 5094 )
    {
      if ( (_DWORD)v7 == 5094 )
        v11 = 43958;
      else
        v11 = 43959;
    }
    else if ( (_DWORD)v7 == 5092 )
    {
      v11 = 43956;
    }
    else
    {
      v11 = 43957;
    }
  }
  else if ( (int)v7 >= 5034 )
  {
    if ( (int)v7 >= 5063 )
    {
      if ( (int)v7 >= 5078 )
      {
        if ( (int)v7 >= 5085 )
        {
          if ( (int)v7 >= 5089 )
          {
            if ( (int)v7 >= 5091 )
            {
              v11 = 43955;
            }
            else if ( (_DWORD)v7 == 5089 )
            {
              v11 = 43953;
            }
            else
            {
              v11 = 43954;
            }
          }
          else if ( (int)v7 >= 5087 )
          {
            if ( (_DWORD)v7 == 5087 )
              v11 = 43951;
            else
              v11 = 43952;
          }
          else if ( (_DWORD)v7 == 5085 )
          {
            v11 = 43949;
          }
          else
          {
            v11 = 43950;
          }
        }
        else if ( (int)v7 >= 5082 )
        {
          if ( (int)v7 >= 5084 )
          {
            v11 = 43948;
          }
          else if ( (_DWORD)v7 == 5082 )
          {
            v11 = 43946;
          }
          else
          {
            v11 = 43947;
          }
        }
        else if ( (int)v7 >= 5080 )
        {
          if ( (_DWORD)v7 == 5080 )
            v11 = 43944;
          else
            v11 = 43945;
        }
        else if ( (_DWORD)v7 == 5078 )
        {
          v11 = 43942;
        }
        else
        {
          v11 = 43943;
        }
      }
      else if ( (int)v7 >= 5071 )
      {
        if ( (int)v7 >= 5075 )
        {
          if ( (int)v7 >= 5077 )
          {
            v11 = 43941;
          }
          else if ( (_DWORD)v7 == 5075 )
          {
            v11 = 43939;
          }
          else
          {
            v11 = 43940;
          }
        }
        else if ( (int)v7 >= 5073 )
        {
          if ( (_DWORD)v7 == 5073 )
            v11 = 43937;
          else
            v11 = 43938;
        }
        else if ( (_DWORD)v7 == 5071 )
        {
          v11 = 43935;
        }
        else
        {
          v11 = 43936;
        }
      }
      else if ( (int)v7 >= 5067 )
      {
        if ( (int)v7 >= 5069 )
        {
          if ( (_DWORD)v7 == 5069 )
            v11 = 43933;
          else
            v11 = 43934;
        }
        else if ( (_DWORD)v7 == 5067 )
        {
          v11 = 43931;
        }
        else
        {
          v11 = 43932;
        }
      }
      else if ( (int)v7 >= 5065 )
      {
        if ( (_DWORD)v7 == 5065 )
          v11 = 43929;
        else
          v11 = 43930;
      }
      else if ( (_DWORD)v7 == 5063 )
      {
        v11 = 43927;
      }
      else
      {
        v11 = 43928;
      }
    }
    else if ( (int)v7 >= 5049 )
    {
      if ( (int)v7 >= 5056 )
      {
        if ( (int)v7 >= 5060 )
        {
          if ( (int)v7 >= 5062 )
          {
            v11 = 43926;
          }
          else if ( (_DWORD)v7 == 5060 )
          {
            v11 = 43924;
          }
          else
          {
            v11 = 43925;
          }
        }
        else if ( (int)v7 >= 5058 )
        {
          if ( (_DWORD)v7 == 5058 )
            v11 = 43922;
          else
            v11 = 43923;
        }
        else if ( (_DWORD)v7 == 5056 )
        {
          v11 = 43920;
        }
        else
        {
          v11 = 43921;
        }
      }
      else if ( (int)v7 >= 5053 )
      {
        if ( (int)v7 >= 5055 )
        {
          v11 = 43919;
        }
        else if ( (_DWORD)v7 == 5053 )
        {
          v11 = 43917;
        }
        else
        {
          v11 = 43918;
        }
      }
      else if ( (int)v7 >= 5051 )
      {
        if ( (_DWORD)v7 == 5051 )
          v11 = 43915;
        else
          v11 = 43916;
      }
      else if ( (_DWORD)v7 == 5049 )
      {
        v11 = 43913;
      }
      else
      {
        v11 = 43914;
      }
    }
    else if ( (int)v7 >= 5042 )
    {
      if ( (int)v7 >= 5046 )
      {
        if ( (int)v7 >= 5048 )
        {
          v11 = 43912;
        }
        else if ( (_DWORD)v7 == 5046 )
        {
          v11 = 43910;
        }
        else
        {
          v11 = 43911;
        }
      }
      else if ( (int)v7 >= 5044 )
      {
        if ( (_DWORD)v7 == 5044 )
          v11 = 43908;
        else
          v11 = 43909;
      }
      else if ( (_DWORD)v7 == 5042 )
      {
        v11 = 43906;
      }
      else
      {
        v11 = 43907;
      }
    }
    else if ( (int)v7 >= 5038 )
    {
      if ( (int)v7 >= 5040 )
      {
        if ( (_DWORD)v7 == 5040 )
          v11 = 43904;
        else
          v11 = 43905;
      }
      else if ( (_DWORD)v7 == 5038 )
      {
        v11 = 43902;
      }
      else
      {
        v11 = 43903;
      }
    }
    else if ( (int)v7 >= 5036 )
    {
      if ( (_DWORD)v7 == 5036 )
        v11 = 43900;
      else
        v11 = 43901;
    }
    else if ( (_DWORD)v7 == 5034 )
    {
      v11 = 43898;
    }
    else
    {
      v11 = 43899;
    }
  }
  else if ( (int)v7 >= 4277 )
  {
    if ( (int)v7 >= 4292 )
    {
      if ( (int)v7 >= 5027 )
      {
        if ( (int)v7 >= 5031 )
        {
          if ( (int)v7 >= 5033 )
          {
            v11 = 43897;
          }
          else if ( (_DWORD)v7 == 5031 )
          {
            v11 = 43895;
          }
          else
          {
            v11 = 43896;
          }
        }
        else if ( (int)v7 >= 5029 )
        {
          if ( (_DWORD)v7 == 5029 )
            v11 = 43893;
          else
            v11 = 43894;
        }
        else if ( (_DWORD)v7 == 5027 )
        {
          v11 = 43891;
        }
        else
        {
          v11 = 43892;
        }
      }
      else
      {
        if ( (int)v7 < 5024 )
        {
          if ( (int)v7 >= 4295 )
          {
            if ( (_DWORD)v7 == 4295 )
            {
              v11 = 11559;
              goto LABEL_7;
            }
            if ( (_DWORD)v7 == 4301 )
            {
              v11 = 11565;
              goto LABEL_7;
            }
          }
          else
          {
            if ( (_DWORD)v7 == 4292 )
            {
              v11 = 11556;
              goto LABEL_7;
            }
            if ( (_DWORD)v7 == 4293 )
            {
              v11 = 11557;
              goto LABEL_7;
            }
          }
LABEL_372:
          v11 = (unsigned int)v7;
          goto LABEL_7;
        }
        if ( (int)v7 >= 5026 )
        {
          v11 = 43890;
        }
        else if ( (_DWORD)v7 == 5024 )
        {
          v11 = 43888;
        }
        else
        {
          v11 = 43889;
        }
      }
    }
    else if ( (int)v7 >= 4285 )
    {
      if ( (int)v7 >= 4289 )
      {
        if ( (int)v7 >= 4291 )
        {
          v11 = 11555;
        }
        else if ( (_DWORD)v7 == 4289 )
        {
          v11 = 11553;
        }
        else
        {
          v11 = 11554;
        }
      }
      else if ( (int)v7 >= 4287 )
      {
        if ( (_DWORD)v7 == 4287 )
          v11 = 11551;
        else
          v11 = 11552;
      }
      else if ( (_DWORD)v7 == 4285 )
      {
        v11 = 11549;
      }
      else
      {
        v11 = 11550;
      }
    }
    else if ( (int)v7 >= 4281 )
    {
      if ( (int)v7 >= 4283 )
      {
        if ( (_DWORD)v7 == 4283 )
          v11 = 11547;
        else
          v11 = 11548;
      }
      else if ( (_DWORD)v7 == 4281 )
      {
        v11 = 11545;
      }
      else
      {
        v11 = 11546;
      }
    }
    else if ( (int)v7 >= 4279 )
    {
      if ( (_DWORD)v7 == 4279 )
        v11 = 11543;
      else
        v11 = 11544;
    }
    else if ( (_DWORD)v7 == 4277 )
    {
      v11 = 11541;
    }
    else
    {
      v11 = 11542;
    }
  }
  else if ( (int)v7 >= 4262 )
  {
    if ( (int)v7 >= 4270 )
    {
      if ( (int)v7 >= 4274 )
      {
        if ( (int)v7 >= 4276 )
        {
          v11 = 11540;
        }
        else if ( (_DWORD)v7 == 4274 )
        {
          v11 = 11538;
        }
        else
        {
          v11 = 11539;
        }
      }
      else if ( (int)v7 >= 4272 )
      {
        if ( (_DWORD)v7 == 4272 )
          v11 = 11536;
        else
          v11 = 11537;
      }
      else if ( (_DWORD)v7 == 4270 )
      {
        v11 = 11534;
      }
      else
      {
        v11 = 11535;
      }
    }
    else if ( (int)v7 >= 4266 )
    {
      if ( (int)v7 >= 4268 )
      {
        if ( (_DWORD)v7 == 4268 )
          v11 = 11532;
        else
          v11 = 11533;
      }
      else if ( (_DWORD)v7 == 4266 )
      {
        v11 = 11530;
      }
      else
      {
        v11 = 11531;
      }
    }
    else if ( (int)v7 >= 4264 )
    {
      if ( (_DWORD)v7 == 4264 )
        v11 = 11528;
      else
        v11 = 11529;
    }
    else if ( (_DWORD)v7 == 4262 )
    {
      v11 = 11526;
    }
    else
    {
      v11 = 11527;
    }
  }
  else
  {
    if ( (int)v7 < 1122 )
    {
      if ( (int)v7 >= 1044 )
      {
        if ( (int)v7 >= 1057 )
        {
          if ( (_DWORD)v7 == 1057 )
          {
            v11 = 7299;
            goto LABEL_7;
          }
          if ( (_DWORD)v7 == 1066 )
          {
            v11 = 7302;
            goto LABEL_7;
          }
        }
        else
        {
          if ( (_DWORD)v7 == 1044 )
          {
            v11 = 7297;
            goto LABEL_7;
          }
          if ( (_DWORD)v7 == 1054 )
          {
            v11 = 7298;
            goto LABEL_7;
          }
        }
      }
      else if ( (int)v7 >= 574 )
      {
        if ( (_DWORD)v7 == 574 )
        {
          v11 = 11366;
          goto LABEL_7;
        }
        if ( (_DWORD)v7 == 1042 )
        {
          v11 = 7296;
          goto LABEL_7;
        }
      }
      else
      {
        if ( (_DWORD)v7 == 304 )
        {
          v11 = 105;
          goto LABEL_7;
        }
        if ( (_DWORD)v7 == 570 )
        {
          v11 = 11365;
          goto LABEL_7;
        }
      }
      goto LABEL_372;
    }
    if ( (int)v7 >= 4259 )
    {
      if ( (int)v7 >= 4261 )
      {
        v11 = 11525;
      }
      else if ( (_DWORD)v7 == 4259 )
      {
        v11 = 11523;
      }
      else
      {
        v11 = 11524;
      }
    }
    else
    {
      if ( (int)v7 < 4257 )
      {
        if ( (_DWORD)v7 == 1122 )
        {
          v11 = 7303;
          goto LABEL_7;
        }
        if ( (_DWORD)v7 == 4256 )
        {
          v11 = 11520;
          goto LABEL_7;
        }
        goto LABEL_372;
      }
      if ( (_DWORD)v7 == 4257 )
        v11 = 11521;
      else
        v11 = 11522;
    }
  }
LABEL_7:
  if ( *(int *)(v6 + 16) <= 0 )
    sub_277F280(a1, a2, a3: v10, a4: v7, a5: v11);
  return (unsigned int)v11;
}
