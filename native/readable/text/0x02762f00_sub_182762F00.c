// sub_2762F00
// rva 0x02762f00  size 981  section .text  group text
// window base 0x182762f00: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2762F00(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        __int64 a9,
        int a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        int a16,
        __int64 a17,
        __int64 a18,
        int a19,
        char a20)
{
  __int64 v20; // r14
  _QWORD *v21; // r15
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdi
  __int64 v25; // rsi
  int v26; // edi
  int v27; // esi
  int v28; // r9d
  __int64 v30; // [rsp+0h] [rbp-68h] BYREF
  __int64 v31; // [rsp+38h] [rbp-30h]
  __int64 v32; // [rsp+40h] [rbp-28h]
  __int64 v33; // [rsp+48h] [rbp-20h]
  int v34; // [rsp+5Ch] [rbp-Ch]

  v33 = a5;
  if ( (unsigned __int64)&v30 <= v21[1] )
    JUMPOUT(0x182763295LL);
  v22 = v21[5];
  if ( (unsigned __int64)(v22 + 24) > v21[4] )
    JUMPOUT(0x182763258LL);
  v21[5] = v22 + 24;
  *(_DWORD *)v22 = 34085680;
  *(_DWORD *)(v22 + 4) = 0;
  *(_QWORD *)(v22 + 8) = 0;
  *(_QWORD *)(v22 + 16) = 0;
  v32 = a3;
  v31 = v22;
  sub_4F35AC0(a1, a2, a3: v22, a4: v20 + 369863760, a5: v20 + 369863760);
  sub_27627A0(a1: v24, a2: v25, a3: v31, a4: v23, a5: v32);
  if ( v33 == v20 )
    JUMPOUT(0x18276329FLL);
  v34 = *(_DWORD *)(v33 + 8);
  if ( v34 == 0 )
    JUMPOUT(0x1827632A5LL);
  return sub_182762FB5(
           a1: v26,
           a2: v27,
           a3: v31,
           a4: *(_DWORD *)(v33 + 12),
           a5: (int)v20 + 372426544,
           a6: v28,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12,
           a13,
           a14,
           a15,
           a16,
           a17,
           a18,
           a19,
           a20);
}
