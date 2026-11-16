// sub_132C5ED8
// rva 0x132c5ed8  size 268  section .text  group text
// window base 0x1932c5ed8: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132C5ED8(__int64 a1, _DWORD a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v5; // rbx
  __int64 v6; // rsi
  __int64 v7; // rbp
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v11; // rdi
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rsi
  unsigned int v16; // ebp
  unsigned int v17; // ecx
  unsigned int v18; // eax

  v5 = *(_QWORD *)(a4 + 40);
  v6 = a3;
  v7 = a5;
  v8 = *(_QWORD *)(v5 + 64);
  if ( v8 == 0 )
  {
    v9 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, __int64))(a4 + 48))(
           a1,
           a2: a3,
           a3: (unsigned int)(1 << *(_DWORD *)(v5 + 48)),
           a4: *(_QWORD *)(a4 + 64),
           a5: 1);
    *(_QWORD *)(v5 + 64) = v9;
    v8 = v9;
    if ( v9 == 0 )
      return 1;
  }
  v11 = *(unsigned int *)(v5 + 52);
  if ( (_DWORD)v11 == 0 )
  {
    v11 = (unsigned int)(1 << *(_DWORD *)(v5 + 48));
    *(_DWORD *)(v5 + 52) = v11;
    *(_QWORD *)(v5 + 56) = 0;
  }
  if ( (unsigned int)v7 >= (unsigned int)v11 )
  {
    sub_1932CA15B(a1: v11, a2: v6 - (unsigned int)v11, a3: v6 - (unsigned int)v11, a4: v8, a5: (unsigned int)v11);
    *(_DWORD *)(v5 + 60) = 0;
LABEL_8:
    v12 = *(_DWORD *)(v5 + 52);
    goto LABEL_16;
  }
  v13 = *(unsigned int *)(v5 + 60);
  if ( (int)v11 - (int)v13 <= (unsigned int)v7 )
    JUMPOUT(0x32651FF80LL);
  sub_1932CA15B(a1: (unsigned int)v7, a2: v6, a3: v6 - v7, a4: v8 + v13, a5: (unsigned int)v7);
  v16 = v7 - v14;
  if ( v16 != 0 )
  {
    sub_1932CA15B(a1: v14, a2: v15 - v16, a3: v15 - v16, a4: *(_QWORD *)(v5 + 64), a5: v16);
    *(_DWORD *)(v5 + 60) = v16;
    goto LABEL_8;
  }
  *(_DWORD *)(v5 + 60) += v14;
  v17 = *(_DWORD *)(v5 + 52);
  if ( *(_DWORD *)(v5 + 60) == v17 )
    *(_DWORD *)(v5 + 60) = 0;
  v18 = *(_DWORD *)(v5 + 56);
  if ( v18 >= v17 )
    return 0;
  v12 = v14 + v18;
LABEL_16:
  *(_DWORD *)(v5 + 56) = v12;
  return 0;
}
