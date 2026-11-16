// sub_182780920
// rva 0x02780920  size 255  section .text  group text
// window base 0x182780920: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182780920(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r15
  void (__fastcall *v8)(__int64, __int64, __int64, __int64); // r10
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 result; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rsi
  int v19; // edx
  int v20; // ecx
  int v21; // edi
  int v22; // esi
  int v23; // r8d
  int v24; // r9d
  _BYTE v25[32]; // [rsp+0h] [rbp-68h] BYREF
  char v26; // [rsp+28h] [rbp-40h] BYREF
  void *v27; // [rsp+30h] [rbp-38h]
  _BYTE *v28; // [rsp+38h] [rbp-30h]
  __int64 v29; // [rsp+40h] [rbp-28h]
  __int64 v30; // [rsp+50h] [rbp-18h]
  __int64 v31; // [rsp+58h] [rbp-10h]
  __int64 v32; // [rsp+60h] [rbp-8h]

  if ( (unsigned __int64)v25 <= *(_QWORD *)(v7 + 8) )
  {
    MEMORY[0x181EB83C0]();
    __builtin_debugtrap();
    return sub_182780A20(a1: v21, a2: v22, a3: v19, a4: v20, a5: v23, a6: v24, a7);
  }
  else
  {
    v32 = a3;
    v31 = a3 + 176;
    v30 = a3 + 80;
    v27 = nullptr;
    v28 = nullptr;
    v29 = *(_QWORD *)(v7 + 56);
    *(_QWORD *)(v7 + 56) = &v26;
    v8 = (void (__fastcall *)(__int64, __int64, __int64, __int64))MEMORY[0x10E44720];
    v27 = &loc_18278097F;
    v28 = v25;
    *(_DWORD *)(v7 + 20) = 3;
    v8(a1, a2: a3 + 80, a3, a4: a3 + 80);
    if ( __sync_val_compare_and_swap((volatile signed __int32 *)(v7 + 20), 3, 1) == 3 )
      *(_QWORD *)(v7 + 56) = *(_QWORD *)(*(_QWORD *)(v7 + 56) + 24LL);
    else
      sub_18277F4A0(a1: v10, a2: v11, a3: 1, a4: v9, a5: 1u);
    *(_DWORD *)(v32 + 328) = 0;
    sub_18278ADA0(a1: v10, a2: v11, a3: v31);
    result = sub_18278AD20(a1: v12, a2: v13, a3: v30);
    if ( *(int *)(v7 + 16) <= 0 )
      return sub_18277F280(a1: v17, a2: v18, a3: v15, a4: v16);
  }
  return result;
}
