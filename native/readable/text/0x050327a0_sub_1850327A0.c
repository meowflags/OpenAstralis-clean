// sub_50327A0
// rva 0x050327a0  size 336  section .text  group text
// window base 0x1850327a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_50327A0(__int64 a1, __int64 a2)
{
  _DWORD *v2; // r14
  __int64 v3; // r15
  __int64 v4; // rdx
  __int64 v5; // rax
  _DWORD *v6; // rax
  __int64 (*v7)(void); // r10
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 result; // rax
  _DWORD v12[8]; // [rsp+0h] [rbp-58h] BYREF
  _DWORD *v13; // [rsp+20h] [rbp-38h]
  char v14; // [rsp+28h] [rbp-30h] BYREF
  void *v15; // [rsp+30h] [rbp-28h]
  _DWORD *v16; // [rsp+38h] [rbp-20h]
  __int64 v17; // [rsp+40h] [rbp-18h]
  int v18; // [rsp+54h] [rbp-4h]

  if ( (unsigned __int64)v12 <= *(_QWORD *)(v3 + 8) )
  {
    sub_1EB84E0();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
  }
  v4 = *(unsigned int *)(v3 + 72);
  if ( (_DWORD)v4 != 0 )
  {
    v5 = (unsigned int)v2[2 * v4 + 18];
    if ( (_DWORD)v5 != 0 )
      v6 = &v2[2 * v5];
    else
      v6 = &v2[2 * v4];
  }
  else
  {
    v6 = v2;
  }
  v13 = v6;
  if ( v6 != v2 && *v6 >> 3 == 5067607 )
  {
    v6[34] = 10;
    __faststorefence();
    result = sub_63606A0(a1, a2, a3: v2 + 94167138);
    if ( (_DWORD)result == 0 )
    {
      result = (__int64)v13;
      v13[34] = 2;
      __faststorefence();
    }
  }
  else
  {
    v15 = nullptr;
    v16 = nullptr;
    v17 = *(_QWORD *)(v3 + 56);
    *(_QWORD *)(v3 + 56) = &v14;
    v7 = (__int64 (*)(void))MEMORY[0xe572530]/* 0xe572530 */;
    v15 = &loc_185032820;
    v16 = v12;
    *(_DWORD *)(v3 + 20) = 3;
    v18 = v7();
    result = (unsigned int)__sync_val_compare_and_swap((volatile signed __int32 *)(v3 + 20), 3, 1);
    if ( (_DWORD)result == 3 )
      *(_QWORD *)(v3 + 56) = *(_QWORD *)(*(_QWORD *)(v3 + 56) + 24LL);
    else
      result = sub_277F4A0(a1: v9, a2: v10, a3: 1, a4: v8, a5: 1);
  }
  if ( *(int *)(v3 + 16) <= 0 )
    return sub_277F280();
  return result;
}
