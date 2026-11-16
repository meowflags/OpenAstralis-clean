// sub_1815AC880
// rva 0x015ac880  size 454  section .text  group text
// window base 0x1815ac880: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1815AC880(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r13
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 (*v9)(void); // rcx
  __int64 result; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // [rsp+0h] [rbp-28h] BYREF
  __int64 v26; // [rsp+8h] [rbp-20h]
  __int64 v27; // [rsp+10h] [rbp-18h]
  __int64 v28; // [rsp+18h] [rbp-10h]
  __int64 v29; // [rsp+20h] [rbp-8h]

  v28 = a3;
  v27 = a5;
  if ( (unsigned __int64)&v25 <= *(_QWORD *)(v7 + 8) )
  {
    MEMORY[0x181EB84E0]();
    goto LABEL_19;
  }
  v8 = *(unsigned int *)(a3 + 4);
  if ( (_DWORD)v8 == 7208760 )
  {
    if ( a5 != v6 )
    {
      v11 = *(unsigned int *)(a5 + 28);
      if ( (_DWORD)v11 != 0 )
      {
        v12 = *(unsigned int *)(v6 + 8 * v11 + 60);
        if ( (_DWORD)v12 != 0 )
        {
          v13 = *(_DWORD *)(v6 + 8 * v12) >> 3;
          if ( (unsigned __int16)*(_DWORD *)(v6
                                           + 8LL * *(unsigned int *)(v6 + 8 * v13 + 20)
                                           + 4LL
                                           * (*(_DWORD *)(v6 + 8 * v13 + 44)
                                            & (0x1839u >> HIBYTE(*(_DWORD *)(v6 + 8 * v13 + 44))))
                                           + 12) == 6201 )
          {
            v14 = *(_DWORD *)(v6 + 8 * v12) >> 3;
            v15 = *(_DWORD *)(v6 + 8 * v14 + 44) & (0x1839u >> HIBYTE(*(_DWORD *)(v6 + 8 * v14 + 44)));
            v16 = ((__int64 (__fastcall *)(__int64, __int64, __int64))(v5
                                                                     + *(_QWORD *)(v6
                                                                                 + 8 * v14
                                                                                 + HIWORD(*(_DWORD *)(v6 + 8LL * *(unsigned int *)(v6 + 8 * v14 + 20) + 4 * v15 + 12))
                                                                                 + 72)))(
                    a1,
                    a2: v15,
                    a3: v6 + 8 * v12);
            if ( v16 != v6 )
            {
              v20 = *(_QWORD *)(v7 + 40);
              if ( (unsigned __int64)(v20 + 16) > *(_QWORD *)(v7 + 32) )
              {
                v26 = v16;
                v21 = MEMORY[0x181EAA840](a1: v18, a2: v19, a3: 34084944, a4: v17, a5: 0);
                v16 = v26;
              }
              else
              {
                *(_QWORD *)(v7 + 40) = v20 + 16;
                *(_QWORD *)v20 = 34084944;
                *(_DWORD *)(v20 + 8) = 0;
                *(_DWORD *)(v20 + 12) = 0;
                v21 = v20;
              }
              v26 = v16;
              result = MEMORY[0x18284CA00](a1: v6 + 376614608, a2: v19, a3: v6 + 52423576, a4: v17, a5: v16, a6: v21);
              goto LABEL_6;
            }
LABEL_25:
            MEMORY[0x1828C1C40](a1: v18, a2: v19, a3: v6 + 371408912);
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
            return sub_1815ACA60(a1: v23, a2: v24, a3: v22);
          }
LABEL_24:
          MEMORY[0x182770780]();
          goto LABEL_25;
        }
LABEL_23:
        MEMORY[0x182771080]();
        goto LABEL_24;
      }
      goto LABEL_21;
    }
LABEL_20:
    MEMORY[0x182771080]();
LABEL_21:
    MEMORY[0x182771080]();
    goto LABEL_22;
  }
  if ( (_DWORD)v8 == 0 )
  {
LABEL_19:
    MEMORY[0x182771080]();
    goto LABEL_20;
  }
  v9 = *(__int64 (**)(void))(v6 + 8 * v8 + 8);
  if ( v9 == nullptr )
  {
LABEL_22:
    MEMORY[0x1828C1C40](a1, a2, a3: v6 + 361300432);
    goto LABEL_23;
  }
  v29 = *(_QWORD *)(v6 + 8 * v8 + 8);
  result = v9();
LABEL_6:
  if ( *(int *)(v7 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
