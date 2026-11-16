// sub_184F371C0
// rva 0x04f371c0  size 811  section .text  group text
// window base 0x184f371c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F371C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // r9
  int v8; // eax
  int v9; // r9d
  int v10; // r9d
  __int64 v11; // rax
  int v12; // ebx
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // rsi
  unsigned __int64 v19; // rdx
  unsigned __int64 v21; // rbp
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdi
  __int64 v25; // rsi
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // [rsp+0h] [rbp-38h] BYREF
  __int64 v29; // [rsp+10h] [rbp-28h]
  _DWORD *v30; // [rsp+18h] [rbp-20h]
  unsigned int v31; // [rsp+24h] [rbp-14h]
  int v32; // [rsp+28h] [rbp-10h]
  unsigned int v33; // [rsp+2Ch] [rbp-Ch]
  __int64 v34; // [rsp+30h] [rbp-8h]

  if ( (unsigned __int64)&v28 <= *(_QWORD *)(v6 + 8) )
  {
    MEMORY[0x181EB84E0]();
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
    return sub_184F37500(a1: v24, a2: v25, a3: v22, a4: v23, a5: v26, a6: v27);
  }
  if ( a5 < 0 )
  {
    v8 = 1;
    v7 = a5;
  }
  else
  {
    v7 = -a5;
    v8 = 0;
  }
  if ( v7 < -9 )
  {
    if ( v7 < -99 )
    {
      if ( v7 < -999 )
      {
        if ( v7 < -9999 )
        {
          if ( v7 < -99999 )
          {
            if ( v7 < -999999 )
            {
              if ( v7 < -9999999 )
              {
                if ( v7 < -99999999 )
                {
                  if ( v7 < -999999999 )
                  {
                    if ( v7 < (__int64)0xFFFFFFFDABF41C01LL )
                    {
                      if ( v7 < (__int64)0xFFFFFFE8B7891801LL )
                      {
                        if ( v7 < (__int64)0xFFFFFF172B5AF001LL )
                        {
                          if ( v7 < (__int64)0xFFFFF6E7B18D6001LL )
                          {
                            if ( v7 < (__int64)0xFFFFA50CEF85C001LL )
                            {
                              if ( v7 < (__int64)0xFFFC72815B398001LL )
                              {
                                if ( v7 < (__int64)0xFFDC790D903F0001LL )
                                {
                                  if ( v7 < (__int64)0xFE9CBA87A2760001LL )
                                  {
                                    if ( v7 < (__int64)0xF21F494C589C0001LL )
                                    {
                                      v34 = a5;
                                      v10 = v8 + 19;
                                      goto LABEL_7;
                                    }
                                    v9 = 18;
                                  }
                                  else
                                  {
                                    v9 = 17;
                                  }
                                }
                                else
                                {
                                  v9 = 16;
                                }
                              }
                              else
                              {
                                v9 = 15;
                              }
                            }
                            else
                            {
                              v9 = 14;
                            }
                          }
                          else
                          {
                            v9 = 13;
                          }
                        }
                        else
                        {
                          v9 = 12;
                        }
                      }
                      else
                      {
                        v9 = 11;
                      }
                    }
                    else
                    {
                      v9 = 10;
                    }
                  }
                  else
                  {
                    v9 = 9;
                  }
                }
                else
                {
                  v9 = 8;
                }
              }
              else
              {
                v9 = 7;
              }
            }
            else
            {
              v9 = 6;
            }
          }
          else
          {
            v9 = 5;
          }
        }
        else
        {
          v9 = 4;
        }
      }
      else
      {
        v9 = 3;
      }
    }
    else
    {
      v9 = 2;
    }
  }
  else
  {
    v9 = 1;
  }
  v10 = v8 + v9;
  v34 = a5;
LABEL_7:
  v11 = *(unsigned int *)(a3 + 4);
  v33 = *(char *)(a3 + 12);
  v12 = *(_DWORD *)(a3 + 8);
  v13 = (unsigned int)(v12 + v10);
  v30 = (_DWORD *)a3;
  v32 = v12;
  v31 = v13;
  v14 = sub_184F39060(a1, a2: (unsigned int)v13, a3: v5 + 8 * v11, a4: v33, a5: v33, a6: v13);
  v29 = v14;
  if ( v33 != 0 )
    MEMORY[0x186327720](a1: v15, a2: v16, a3: v34, a4: v33, a5: v31, a6: v14);
  else
    MEMORY[0x186327120](a1: v15, a2: v16, a3: v34, a4: v33, a5: v31, a6: v14);
  v19 = (unsigned __int64)v30;
  v30[1] = (unsigned __int64)(v29 - v5) >> 3;
  if ( (*(_DWORD *)v19 & 2) != 0 )
  {
    v21 = (v19 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((v19 & 0xFFFFFFFFFFF80000LL) + ((v19 - v21) >> 9) + 0x38) != 0 )
      *(_BYTE *)((v19 & 0xFFFFFFFFFFF80000LL) + ((v19 - v21) >> 9) + 0x38) = 0;
  }
  *(_DWORD *)(v19 + 8) = v31;
  if ( *(int *)(v6 + 16) <= 0 )
    MEMORY[0x18277F280](a1: v17, a2: v18, a3: v19, a4: v33);
  return v19;
}
