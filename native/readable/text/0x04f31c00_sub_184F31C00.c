// sub_4F31C00
// rva 0x04f31c00  size 344  section .text  group text
// window base 0x184f31c00: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_BOOL8 __fastcall sub_4F31C00(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 (__fastcall *v17)(__int64, __int64, __int64, __int64, __int64, __int64); // r10
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v24; // rax
  _BYTE v25[40]; // [rsp+0h] [rbp-88h] BYREF
  __int64 v26; // [rsp+28h] [rbp-60h]
  __int64 v27; // [rsp+30h] [rbp-58h]
  __int64 v28; // [rsp+38h] [rbp-50h]
  char v29; // [rsp+40h] [rbp-48h] BYREF
  void *v30; // [rsp+48h] [rbp-40h]
  _BYTE *v31; // [rsp+50h] [rbp-38h]
  __int64 v32; // [rsp+58h] [rbp-30h]
  int v33; // [rsp+6Ch] [rbp-1Ch]
  __int64 v34; // [rsp+70h] [rbp-18h]
  __int64 v35; // [rsp+78h] [rbp-10h]
  unsigned int v36; // [rsp+84h] [rbp-4h]

  if ( (unsigned __int64)v25 <= *(_QWORD *)(v7 + 8) )
  {
    sub_1EB84E0();
    JUMPOUT(0x184F31D58LL);
  }
  if ( *(_QWORD *)v7 == 0 )
  {
    v24 = *(_QWORD *)(v6 + 376351984);
    if ( v24 == 0 )
    {
      v24 = v6 + 373388464;
      *(_QWORD *)(v6 + 376351984) = v6 + 373388464;
    }
    *(_QWORD *)v7 = v24;
  }
  v28 = a6;
  v27 = a5;
  v26 = a3;
  v36 = sub_206D7A0(a1, a2, a3: 16);
  v35 = sub_206CE60(a1: v8, a2: v9, a3: v26);
  v34 = sub_206CE60(a1: v10, a2: v11, a3: v27);
  v14 = sub_206CE60(a1: v12, a2: v13, a3: v28);
  v15 = v34;
  v16 = v35;
  v30 = nullptr;
  v31 = nullptr;
  v32 = *(_QWORD *)(v7 + 56);
  *(_QWORD *)(v7 + 56) = &v29;
  v17 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64, __int64))MEMORY[0xe6775b8]/* 0xe6775b8 */;
  v30 = &loc_184F31CA9;
  v31 = v25;
  *(_DWORD *)(v7 + 20) = 3;
  v33 = v17(a1: v18, a2: v19, a3: v16, a4: v7, a5: v15, a6: v14);
  if ( __sync_val_compare_and_swap((volatile signed __int32 *)(v7 + 20), 3, 1) == 3 )
    *(_QWORD *)(v7 + 56) = *(_QWORD *)(*(_QWORD *)(v7 + 56) + 24LL);
  else
    sub_277F4A0(a1: v21, a2: v22, a3: 1, a4: v20, a5: 1);
  sub_206CDE0(a1: v21, a2: v22, a3: v36);
  sub_206CE20();
  if ( *(int *)(v7 + 16) <= 0 )
    sub_277F280();
  return (_BYTE)v33 != 0;
}
