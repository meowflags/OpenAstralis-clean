// sub_182761080
// rva 0x02761080  size 250  section .text  group text
// window base 0x182761080: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182761080(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 result; // rax
  _WORD *v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // rcx
  char v14; // [rsp+0h] [rbp-28h] BYREF
  __int64 v15; // [rsp+10h] [rbp-18h]
  __int64 v16; // [rsp+18h] [rbp-10h]
  __int64 v17; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v14 <= *(_QWORD *)(v7 + 8) )
  {
    MEMORY[0x181EB84E0]();
    goto LABEL_12;
  }
  v17 = a3;
  v16 = a5;
  v15 = a6;
  if ( *(_BYTE *)(a3 + 16) != 0 )
  {
LABEL_12:
    v11 = v6 + 373281248;
    if ( a6 == v6 )
      goto LABEL_17;
    v12 = v6 + 8LL * *(unsigned int *)(v6 + 8LL * (*(_DWORD *)a6 >> 3) + 12);
    v13 = a3;
    goto LABEL_14;
  }
  if ( a6 == v6 )
    goto LABEL_15;
  if ( *(_DWORD *)a6 >> 3 != 4288481 )
  {
    while ( 1 )
    {
      v11 = sub_18275BEC0(
              a1,
              a2,
              a3: v17,
              a4,
              a5: v6 + 8LL * *(unsigned int *)(v6 + 8LL * (*(_DWORD *)a6 >> 3) + 12),
              a6: v6 + 373281248,
              a7: v14);
LABEL_17:
      v12 = v11;
      v13 = v17;
LABEL_14:
      sub_18275BDA0(a1, a2, a3: v13, a4: v13, a5: v12, a6: v11, a7: v14);
LABEL_15:
      sub_18275BEC0(a1, a2, a3, a4, a5: v6 + 373281248, a6: v6 + 373281248, a7: v14);
    }
  }
  result = (unsigned int)*(__int16 *)(a6 + 4);
  v9 = *(_WORD **)(a3 + 8);
  v10 = *(unsigned int *)(a3 + 20);
  if ( (_DWORD)v10 != 0 )
    *(_WORD *)((char *)&v9[4 * v10] + v6) = *(_WORD *)(a6 + 4);
  else
    *v9 = *(_WORD *)(a6 + 4);
  if ( *(int *)(v7 + 16) <= 0 )
    return sub_18277F280(a1, a2, a3);
  return result;
}
