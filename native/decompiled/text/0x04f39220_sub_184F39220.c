// sub_184F39220
// rva 0x04f39220  size 390  section .text  group text
// window base 0x184f39220: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F39220(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rbp
  __int64 result; // rax
  __int64 v12; // [rsp+0h] [rbp-28h] BYREF
  __int64 v13; // [rsp+10h] [rbp-18h]
  __int64 v14; // [rsp+18h] [rbp-10h]
  int v15; // [rsp+20h] [rbp-8h]
  int v16; // [rsp+24h] [rbp-4h]

  v14 = a5;
  if ( (unsigned __int64)&v12 <= *(_QWORD *)(v7 + 8) )
  {
    v16 = a1;
    v15 = a6;
    v13 = a3;
    MEMORY[0x181EB84E0]();
LABEL_20:
    v16 = a1;
    v15 = a6;
    v13 = a3;
    MEMORY[0x182770B00]();
    goto LABEL_21;
  }
  v8 = *(_DWORD *)(a3 + 8);
  v9 = *(unsigned int *)(a3 + 4);
  if ( *(char *)(a3 + 12) != (_DWORD)a1 )
  {
    if ( v8 >= 0 )
    {
      if ( (_DWORD)v9 != 0 )
      {
        if ( (unsigned int)v8 <= *(_DWORD *)(v6 + 8 * v9 + 8) )
        {
          if ( a6 >= 0 )
          {
            if ( a5 != v6 )
            {
              if ( (unsigned int)(v8 + a6) <= *(_DWORD *)(a5 + 8) >> 1 )
              {
                v16 = a1;
                v13 = a3;
                v10 = 8 * v9;
                if ( 8 * v9 != 0 )
                  v10 += v6;
                if ( a5 == v6 )
                  JUMPOUT(0x309E4F2ABLL);
                v15 = a6;
                result = MEMORY[0x182836300](
                           a1,
                           a2,
                           a3: v10 + 12,
                           a4: a5,
                           a5: a5 + 2LL * (unsigned int)a6 + 12,
                           a6: (unsigned int)v8);
                goto LABEL_13;
              }
LABEL_27:
              MEMORY[0x182770B00]();
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
              return sub_184F393C0();
            }
LABEL_26:
            v16 = a1;
            v15 = a6;
            v13 = a3;
            MEMORY[0x182771080]();
            goto LABEL_27;
          }
LABEL_25:
          v16 = a1;
          v15 = a6;
          v13 = a3;
          MEMORY[0x182770B00]();
          goto LABEL_26;
        }
LABEL_24:
        v16 = a1;
        v15 = a6;
        v13 = a3;
        MEMORY[0x182770B00]();
        goto LABEL_25;
      }
LABEL_23:
      v16 = a1;
      v15 = a6;
      v13 = a3;
      MEMORY[0x182771080]();
      goto LABEL_24;
    }
    goto LABEL_20;
  }
  v16 = a1;
  v15 = a6;
  v13 = a3;
  if ( (_DWORD)v9 == 0 )
  {
LABEL_21:
    MEMORY[0x182771080]();
  }
  else if ( a5 != v6 )
  {
    result = MEMORY[0x181EB4960](
               a1: (unsigned int)(v15 << v16),
               a2: (unsigned int)(v8 << v16),
               a3: v6 + 8 * v9,
               a4: a5,
               a5: 0,
               a6: a5);
LABEL_13:
    if ( *(int *)(v7 + 16) <= 0 )
      return MEMORY[0x18277F280]();
    return result;
  }
  MEMORY[0x182771080]();
  goto LABEL_23;
}
