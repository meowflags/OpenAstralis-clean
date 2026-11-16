// sub_182780A20
// rva 0x02780a20  size 509  section .text  group text
// window base 0x182780a20: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182780A20(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  void (__fastcall *v5)(__int64, __int64, __int64, __int64); // r10
  __int64 v6; // rdi
  __int64 v7; // rsi
  unsigned int (__fastcall *v8)(__int64, __int64, __int64, __int64, __int64); // rbp
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 result; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rsi
  _BYTE v20[32]; // [rsp+0h] [rbp-78h] BYREF
  char v21; // [rsp+28h] [rbp-50h] BYREF
  void *v22; // [rsp+30h] [rbp-48h]
  _BYTE *v23; // [rsp+38h] [rbp-40h]
  __int64 v24; // [rsp+40h] [rbp-38h]
  unsigned int v25; // [rsp+54h] [rbp-24h]
  unsigned int (__fastcall *v26)(__int64, __int64, __int64, __int64, __int64); // [rsp+58h] [rbp-20h]
  __int64 v27; // [rsp+60h] [rbp-18h]
  __int64 v28; // [rsp+68h] [rbp-10h]
  __int64 v29; // [rsp+70h] [rbp-8h]

  if ( (unsigned __int64)v20 <= *(_QWORD *)(v4 + 8) )
  {
    MEMORY[0x181EB83C0]();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_182780C20();
  }
  v29 = a3;
  v28 = a3 + 176;
  v27 = a3 + 80;
  v22 = nullptr;
  v23 = nullptr;
  v24 = *(_QWORD *)(v4 + 56);
  *(_QWORD *)(v4 + 56) = &v21;
  v5 = (void (__fastcall *)(__int64, __int64, __int64, __int64))MEMORY[0x10E44720];
  v22 = &loc_182780A7F;
  v23 = v20;
  *(_DWORD *)(v4 + 20) = 3;
  v5(a1, a2: a3 + 80, a3, a4: a3 + 80);
  if ( __sync_val_compare_and_swap((volatile signed __int32 *)(v4 + 20), 3, 1) == 3 )
    *(_QWORD *)(v4 + 56) = *(_QWORD *)(*(_QWORD *)(v4 + 56) + 24LL);
  else
    sub_18277F4A0(a1: v6, a2: v7, a3: 1, a4: 1, a5: 1u);
  v8 = (unsigned int (__fastcall *)(__int64, __int64, __int64, __int64, __int64))MEMORY[0x10E44DE0];
  v26 = (unsigned int (__fastcall *)(__int64, __int64, __int64, __int64, __int64))MEMORY[0x10E44DE0];
  while ( 1 )
  {
    v9 = v27;
    v10 = v28;
    if ( *(_DWORD *)(v29 + 328) != 1 )
      break;
    v22 = nullptr;
    v23 = nullptr;
    v24 = *(_QWORD *)(v4 + 56);
    *(_QWORD *)(v4 + 56) = &v21;
    v22 = &loc_182780B18;
    v23 = v20;
    *(_DWORD *)(v4 + 20) = 3;
    v11 = v8(a1: v9, a2: v10, a3: v9, a4: v10, a5: 0xFFFFFFFFLL);
    if ( __sync_val_compare_and_swap((volatile signed __int32 *)(v4 + 20), 3, 1) == 3 )
    {
      v14 = *(_QWORD *)(*(_QWORD *)(v4 + 56) + 24LL);
      *(_QWORD *)(v4 + 56) = v14;
    }
    else
    {
      v25 = v11;
      sub_18277F4A0(a1: v12, a2: v13, a3: 1, a4: v11, a5: 1u);
      v11 = v25;
    }
    if ( (_DWORD)v11 != 0 )
    {
      if ( *(int *)(v4 + 16) <= 0 )
        goto LABEL_14;
      v8 = v26;
    }
    else
    {
      sub_1827860C0(a1: v12, a2: v13, a3: v3 + 367119432);
      if ( *(int *)(v4 + 16) <= 0 )
      {
LABEL_14:
        sub_18277F280(a1: v12, a2: v13, a3: v14, a4: v11);
        v8 = v26;
      }
      else
      {
        v8 = v26;
      }
    }
  }
  result = sub_18278AD20(a1: v27, a2: v28, a3: v27);
  if ( *(int *)(v4 + 16) <= 0 )
    return sub_18277F280(a1: v18, a2: v19, a3: v16, a4: v17);
  return result;
}
