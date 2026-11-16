// sub_278D500
// rva 0x0278d500  size 124  section .text  group text
// window base 0x18278d500: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_278D500(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 (__fastcall *v12)(__int64, __int64, __int64); // rax
  int v13; // eax
  __int64 v14; // rdx
  int v16; // edx
  int v17; // ecx
  int v18; // edi
  int v19; // esi
  int v20; // r8d
  int v21; // r9d
  __int64 v22; // [rsp+0h] [rbp-18h] BYREF
  __int64 v23; // [rsp+8h] [rbp-10h]
  __int64 v24; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v22 <= *(_QWORD *)(v9 + 8) )
  {
    sub_1EB84E0();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_278D580(a1: v18, a2: v19, a3: v16, a4: v17, a5: v20, a6: v21, a7);
  }
  else
  {
    v10 = *(unsigned int *)(a3 + 4);
    v11 = v8 + 8 * v10;
    if ( (_DWORD)v10 != 0 )
    {
      v23 = a3;
      v12 = (__int64 (__fastcall *)(__int64, __int64, __int64))(v7
                                                              + *(_QWORD *)(v8
                                                                          + 8LL * (*(_DWORD *)(v8 + 8 * v10) >> 3)
                                                                          + 96));
      v24 = v11;
      v13 = v12(a1, a2, a3: v11);
    }
    else
    {
      v13 = 0;
      v24 = v11;
      v23 = a3;
    }
    if ( *(int *)(v9 + 16) <= 0 )
      v13 = sub_277F280(a1, a2, a3: v23, a4: v24);
    else
      v14 = v23;
    return (unsigned int)(*(_DWORD *)(v14 + 8) + 31 * v13);
  }
}
