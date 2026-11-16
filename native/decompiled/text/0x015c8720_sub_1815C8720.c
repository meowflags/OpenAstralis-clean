// sub_1815C8720
// rva 0x015c8720  size 390  section .text  group text
// window base 0x1815c8720: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1815C8720(__int64 a1, __int64 a2, char *a3, __int64 a4, int a5, unsigned int a6)
{
  __int64 v6; // r13
  char *v7; // r14
  __int64 v8; // r15
  __int64 v9; // rax
  char *v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 result; // rax
  __int64 v16; // rdi
  char *v17; // rdx
  __int64 v18; // [rsp+0h] [rbp-28h] BYREF
  __int64 v19; // [rsp+8h] [rbp-20h]
  char *v20; // [rsp+10h] [rbp-18h]
  unsigned int v21; // [rsp+18h] [rbp-10h]
  unsigned int v22; // [rsp+1Ch] [rbp-Ch]
  __int64 v23; // [rsp+20h] [rbp-8h]

  v20 = a3;
  HIDWORD(v23) = a5;
  v19 = a1;
  if ( (unsigned __int64)&v18 <= *(_QWORD *)(v8 + 8) )
  {
    v22 = a6;
    MEMORY[0x181EB84E0]();
    goto LABEL_11;
  }
  LODWORD(v23) = a6 - a5;
  if ( a3 == v7 )
  {
LABEL_11:
    v22 = a6;
    MEMORY[0x182771080]();
  }
  else if ( (unsigned __int16)*(_DWORD *)&v7[8 * *(unsigned int *)&v7[8 * (*(_DWORD *)a3 >> 3) + 20]
                                           + 12
                                           + 4
                                           * (*(_DWORD *)&v7[8 * (*(_DWORD *)a3 >> 3) + 44]
                                            & (0x5A9u >> HIBYTE(*(_DWORD *)&v7[8 * (*(_DWORD *)a3 >> 3) + 44])))] == 1449 )
  {
    v22 = a6;
    v9 = *(_DWORD *)a3 >> 3;
    v10 = &v7[8 * *(unsigned int *)&v7[8 * v9 + 20]];
    v21 = ((__int64 (__fastcall *)(__int64, char *, char *, char *))(v6
                                                                   + *(_QWORD *)&v7[8 * v9
                                                                                  + 56
                                                                                  + HIWORD(*(_DWORD *)&v10[4 * (*(_DWORD *)&v7[8 * v9 + 44] & (0x5A9u >> HIBYTE(*(_DWORD *)&v7[8 * v9 + 44]))) + 12])]))(
            a1,
            a2: v10,
            a3,
            a4: a3);
    MEMORY[0x18632A360](a1: v7, a2: v12, a3: HIDWORD(v23), a4: v11, a5: v22, a6: v21);
    result = *(_QWORD *)(v8 + 40);
    if ( (unsigned __int64)(result + 40) > *(_QWORD *)(v8 + 32) )
    {
      result = MEMORY[0x181EAA920](a1: v13, a2: v14, a3: 35853304);
    }
    else
    {
      *(_QWORD *)(v8 + 40) = result + 40;
      *(_DWORD *)result = 35853304;
      *(_DWORD *)(result + 4) = 0;
      *(_QWORD *)(result + 8) = 0;
      *(_QWORD *)(result + 16) = 0;
      *(_QWORD *)(result + 24) = 0;
      *(_QWORD *)(result + 32) = 0;
    }
    v16 = v19;
    v17 = v20;
    *(_QWORD *)(result + 16) = v23;
    *(_DWORD *)(result + 12) = (unsigned __int64)(v16 - (_QWORD)v7) >> 3;
    *(_DWORD *)(result + 8) = (unsigned __int64)(v17 - v7) >> 3;
    if ( *(int *)(v8 + 16) <= 0 )
      return MEMORY[0x18277F280](a1: v16, a2: v14, a3: v17, a4: v21);
    return result;
  }
  MEMORY[0x182770780]();
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
  return sub_1815C88C0();
}
