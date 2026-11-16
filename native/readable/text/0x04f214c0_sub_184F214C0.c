// sub_4F214C0
// rva 0x04f214c0  size 209  section .text  group text
// window base 0x184f214c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F214C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  unsigned int v7; // ebx
  __int64 v8; // r13
  __int64 v9; // r14
  __int64 v10; // r15
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 result; // rax
  __int64 v17; // rax
  int v18; // edx
  int v19; // ecx
  int v20; // edi
  int v21; // esi
  int v22; // r8d
  int v23; // r9d
  char v24; // [rsp+0h] [rbp-18h] BYREF
  unsigned int *v25; // [rsp+10h] [rbp-8h]

  v25 = (unsigned int *)a3;
  if ( (unsigned __int64)&v24 <= *(_QWORD *)(v10 + 8) )
  {
    sub_1EB84E0();
    goto LABEL_13;
  }
  sub_4F21320(a1, a2, a3, a4, a5, a6, a7: v24);
  v13 = v25[2];
  if ( (_DWORD)v13 == 0 )
  {
LABEL_13:
    sub_2771080();
LABEL_14:
    sub_2771080();
    goto LABEL_15;
  }
  v14 = v25[3];
  v7 = *(_DWORD *)(v9 + 8 * v13 + 8);
  if ( (int)v7 <= (int)v14 )
  {
    v15 = v25[1];
    if ( (_DWORD)v15 != 0 )
    {
      result = ((__int64 (__fastcall *)(__int64, __int64, __int64))(v8
                                                                  + *(_QWORD *)(v9
                                                                              + 8LL * (*(_DWORD *)(v9 + 8 * v15) >> 3)
                                                                              + 144)))(
                 a1: v11,
                 a2: v12,
                 a3: v9 + 8 * v15);
      if ( *(int *)(v10 + 16) <= 0 )
        return sub_277F280();
      return result;
    }
    goto LABEL_14;
  }
  v25[3] = v14 + 1;
  if ( v7 <= (unsigned int)v14 )
  {
LABEL_15:
    sub_2771220(a1: v11, a2: v12, a3: (unsigned int)v14, a4: v14, a5: v7);
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
    return sub_4F215A0(a1: v20, a2: v21, a3: v18, a4: v19, a5: v22, a6: v23, a7);
  }
  v17 = v9 + 8 * v13;
  if ( *(int *)(v10 + 16) <= 0 )
    v17 = sub_277F280();
  return *(unsigned __int8 *)(v17 + v14 + 12);
}
