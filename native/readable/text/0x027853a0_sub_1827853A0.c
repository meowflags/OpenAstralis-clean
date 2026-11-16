// sub_27853A0
// rva 0x027853a0  size 264  section .text  group text
// window base 0x1827853a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_27853A0(
        __int64 a1,
        __int64 a2,
        __int64 (__fastcall *a3)(__int64, __int64, __int64, __int64, __int64, __int64),
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 (__fastcall *v11)(__int64, __int64, __int64, __int64, __int64, __int64); // r10
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rsi
  _BYTE v22[40]; // [rsp+0h] [rbp-88h] BYREF
  __int64 v23; // [rsp+28h] [rbp-60h]
  __int64 v24; // [rsp+30h] [rbp-58h]
  char v25; // [rsp+38h] [rbp-50h] BYREF
  void *v26; // [rsp+40h] [rbp-48h]
  _BYTE *v27; // [rsp+48h] [rbp-40h]
  __int64 v28; // [rsp+50h] [rbp-38h]
  __int64 v29; // [rsp+60h] [rbp-28h]
  __int64 v30; // [rsp+68h] [rbp-20h]
  __int64 (__fastcall *v31)(__int64, __int64, __int64, __int64, __int64, __int64); // [rsp+70h] [rbp-18h]
  __int64 v32; // [rsp+78h] [rbp-10h]
  __int64 v33; // [rsp+80h] [rbp-8h]

  if ( (unsigned __int64)v22 <= *(_QWORD *)(v7 + 8) )
  {
    sub_1EB84E0();
    JUMPOUT(0x1827854A8LL);
  }
  v33 = a1;
  v32 = a5;
  v31 = a3;
  v24 = a6;
  v23 = v6 + 376358856;
  v8 = sub_1EBA520(a1, a2, a3: v6 + 376358856, a4, a5: a6);
  v26 = nullptr;
  v27 = nullptr;
  v28 = *(_QWORD *)(v7 + 56);
  *(_QWORD *)(v7 + 56) = &v25;
  v9 = v33;
  v10 = v32;
  v30 = v8;
  v11 = v31;
  v26 = &loc_182785429;
  v27 = v22;
  *(_DWORD *)(v7 + 20) = 3;
  v29 = v11(a1: v12, a2: v13, a3: v8, a4: v7, a5: v9, a6: v10);
  if ( __sync_val_compare_and_swap((volatile signed __int32 *)(v7 + 20), 3, 1) == 3 )
    *(_QWORD *)(v7 + 56) = *(_QWORD *)(*(_QWORD *)(v7 + 56) + 24LL);
  else
    sub_277F4A0(a1: v15, a2: v16, a3: 1, a4: v14, a5: 1u);
  sub_1EBB1E0(a1: v15, a2: v16, a3: v23, a4: v14, a5: v30);
  if ( *(int *)(v7 + 16) <= 0 )
    sub_277F280(a1: v19, a2: v20, a3: v17, a4: v18);
  return v29;
}
