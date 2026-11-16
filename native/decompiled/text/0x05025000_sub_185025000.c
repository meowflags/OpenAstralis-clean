// sub_185025000
// rva 0x05025000  size 1588  section .text  group text
// window base 0x185025000: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_185025000(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        int a12,
        __int64 a13,
        int a14,
        __int64 a15,
        __int64 a16,
        int a17,
        char a18)
{
  __int64 v18; // r14
  __int64 v19; // r15
  unsigned int v20; // eax
  unsigned int v21; // ecx
  unsigned int v22; // ebx
  int v23; // eax
  _QWORD *v24; // rdx
  unsigned __int64 v25; // r9
  char *v26; // rsi
  unsigned int v27; // ebp
  unsigned __int64 i; // r8
  __int64 v30; // [rsp+0h] [rbp-58h] BYREF
  __int64 v31; // [rsp+18h] [rbp-40h]
  __int64 v32; // [rsp+20h] [rbp-38h]
  __int64 v33; // [rsp+28h] [rbp-30h]
  unsigned int v34; // [rsp+48h] [rbp-10h]
  unsigned int v35; // [rsp+4Ch] [rbp-Ch]
  int v36; // [rsp+50h] [rbp-8h]
  unsigned int v37; // [rsp+54h] [rbp-4h]

  v33 = a5;
  v32 = a6;
  if ( (unsigned __int64)&v30 <= *(_QWORD *)(v19 + 8) )
    JUMPOUT(0x18502556ALL);
  if ( a6 == v18 )
    JUMPOUT(0x185025574LL);
  if ( a5 == v18 )
    JUMPOUT(0x185025606LL);
  v20 = *(_DWORD *)(a5 + 8);
  v21 = v20 >> 1;
  v37 = v20 >> 1;
  if ( (v20 & 0xFFFFFFFE) != 0 )
  {
    v22 = *(unsigned __int16 *)(a5 + 12);
    if ( v22 >= 0xD800 && v22 < 0xE000 )
      JUMPOUT(0x1850251E4LL);
    v35 = v20;
    v31 = a3;
    v34 = v22;
    v23 = MEMORY[0x184F4C2E0](a1, a2, a3: v22);
    if ( v34 == v23 )
      JUMPOUT(0x185025215LL);
    v36 = 0;
  }
  else
  {
    v36 = 0;
    v35 = v20;
    v31 = a3;
  }
  if ( v37 != 0 )
  {
    v24 = *(_QWORD **)(v19 + 40);
    v25 = (v35 + 19LL) & 0x1FFFFFFF8LL;
    if ( v25 >= 0x20000 || (v26 = (char *)v24 + v25, (unsigned __int64)v24 + v25 > *(_QWORD *)(v19 + 32)) )
      JUMPOUT(0x1850253EDLL);
    v27 = v35;
    *(_QWORD *)(v19 + 40) = v26;
    *v24 = 34082368;
    v24[1] = v27;
    if ( v25 - 16 >= 0x800 )
      JUMPOUT(0x185025475LL);
    for ( i = 16; v25 > i; i += 8LL )
      v24[i / 8] = 0;
    return sub_185025163(
             a1: 34082368,
             a2: (_DWORD)v26,
             a3: (_DWORD)v24,
             a4: v21,
             a5: i,
             a6: v25,
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
      JUMPOUT(0x1850254D8LL);
    return v31;
  }
}
