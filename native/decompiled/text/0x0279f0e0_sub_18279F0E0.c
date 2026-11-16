// sub_18279F0E0
// rva 0x0279f0e0  size 1790  section .text  group text
// window base 0x18279f0e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18279F0E0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        int a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        int a16,
        __int64 a17,
        __int64 a18)
{
  __int64 v18; // r14
  __int64 v19; // r15
  __int64 v20; // rax
  int v21; // eax
  int v22; // edi
  int v23; // r8d
  int v24; // r9d
  __int64 v25; // rdx
  unsigned __int64 v26; // rbx
  __int64 v27; // rsi
  unsigned __int64 i; // rcx
  _QWORD v30[12]; // [rsp+0h] [rbp-68h] BYREF
  int v31; // [rsp+64h] [rbp-4h]

  v30[5] = a3;
  if ( (unsigned __int64)v30 <= *(_QWORD *)(v19 + 8) )
    JUMPOUT(0x18279F73FLL);
  v20 = *(unsigned int *)(a3 + 12);
  if ( (_DWORD)v20 == 0 )
    JUMPOUT(0x18279F745LL);
  v21 = MEMORY[0x1827B6940](a1, a2, a3: v18 + 8 * v20);
  v31 = v21;
  if ( v21 != 0 )
  {
    if ( v21 < 0 )
      JUMPOUT(0x18279F74ALL);
    v25 = *(_QWORD *)(v19 + 40);
    v26 = (4LL * (unsigned int)v21 + 19) & 0x7FFFFFFF8LL;
    if ( v26 >= 0x20000 || (v27 = v25 + v26, v25 + v26 > *(_QWORD *)(v19 + 32)) )
      JUMPOUT(0x18279F6DCLL);
    *(_QWORD *)(v19 + 40) = v27;
    *(_QWORD *)v25 = 40546304;
    *(_DWORD *)(v25 + 8) = v21;
    *(_DWORD *)(v25 + 12) = 0;
    if ( v26 - 16 >= 0x800 )
      JUMPOUT(0x18279F718LL);
    for ( i = 16; v26 > i; i += 8LL )
      *(_QWORD *)(v25 + i) = 0;
    return sub_18279F1CA(
             a1: v22,
             a2: v27,
             a3: v25,
             a4: i,
             a5: v23,
             a6: v24,
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
             a18);
  }
  else
  {
    if ( *(int *)(v19 + 16) <= 0 )
      JUMPOUT(0x18279F72BLL);
    return v18 + 376671776;
  }
}
