// sub_1EBCE20
// rva 0x01ebce20  size 373  section .text  group text
// window base 0x181ebce20: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1EBCE20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r13
  unsigned int *v7; // r14
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 result; // rax
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdi
  __int64 v27; // rsi
  __int64 v28; // r8
  __int64 v29; // r9

  v8 = v7[94087923];
  if ( (_DWORD)v8 == 0
    || (_DWORD)(result = ((__int64 (__fastcall *)(__int64, __int64, unsigned int *))(v6
                                                                                   + *(_QWORD *)&v7[2 * (v7[2 * v8] >> 3) + 34]))(
                           a1,
                           a2,
                           a3: &v7[2 * v8])) == 0 )
  {
    v9 = v7[94164718];
    if ( (_DWORD)v9 == 47076562 )
      v10 = (__int64)(v7 + 8781820);
    else
      v10 = (__int64)&v7[2 * v9];
    if ( (unsigned int *)v10 != v7 )
    {
      a5 = *(_DWORD *)v10 >> 3;
      if ( (_DWORD)a5 != 4261917 )
        goto LABEL_24;
    }
    if ( (unsigned int *)v10 == v7 )
    {
      sub_276EFE0();
    }
    else
    {
      if ( *(_BYTE *)(v10 + 4) != 0 )
      {
        sub_2084840(a1, a2, a3: v7 + 94153220, a4: v7 + 94153220, a5: v7 + 91688654);
        v14 = sub_2084840(a1: v12, a2: v13, a3: v7 + 94153220, a4: v11, a5: &v7[2 * *(unsigned int *)(a3 + 8)]);
        sub_20841E0(a1: v15, a2: v16, a3: v14);
        MEMORY[0x11703150]/* 0x11703150 */(a1: v18, a2: v19, a3: v17, a4: 3);
      }
      v20 = v7[94164726];
      if ( (_DWORD)v20 == 47076562 )
        result = (__int64)(v7 + 8781820);
      else
        result = (__int64)&v7[2 * v20];
      if ( (unsigned int *)result != v7 )
      {
        a4 = *(_DWORD *)result >> 3;
        if ( (_DWORD)a4 != 4261917 )
          goto LABEL_25;
      }
      if ( (unsigned int *)result != v7 )
      {
        if ( *(_BYTE *)(result + 4) == 0 )
          return result;
        goto LABEL_23;
      }
    }
    sub_276EFE0();
LABEL_23:
    sub_1EBCD20(a1, a2, a3: v10, a4, a5, a6);
    sub_28C1C40(a1: v22, a2: v23, a3: v7 + 88061558);
LABEL_24:
    sub_276EAE0();
LABEL_25:
    sub_276EAE0(a1, a2, a3);
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
    return sub_1EBCFA0(a1: v26, a2: v27, a3: v24, a4: v25, a5: v28, a6: v29);
  }
  return result;
}
