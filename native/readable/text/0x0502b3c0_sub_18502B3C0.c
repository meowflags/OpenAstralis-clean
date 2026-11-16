// sub_502B3C0
// rva 0x0502b3c0  size 325  section .text  group text
// window base 0x18502b3c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_DWORD *__fastcall sub_502B3C0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // rax
  _DWORD *v6; // rcx
  _DWORD *result; // rax
  int v8; // ecx
  unsigned __int64 v9; // rbx
  __int64 v10; // rcx
  int v11; // [rsp+0h] [rbp-18h] BYREF
  _DWORD *v12; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v11 <= *(_QWORD *)(v4 + 8) )
  {
    sub_1EB84E0();
LABEL_25:
    v12 = v6;
    sub_15ACE20(a1, a2, a3: v3 + 43304920);
    goto LABEL_8;
  }
  v5 = *(unsigned int *)(v3 + 374348848);
  v6 = (_DWORD *)(v3 + 8 * v5);
  if ( (_DWORD)v5 != 0 )
  {
LABEL_3:
    if ( *(int *)(v4 + 16) <= 0 )
      sub_277F280(a1, a2, a3, a4: v6);
    return v6;
  }
  if ( *(_BYTE *)(v3 + 377212378) != 0 )
    goto LABEL_25;
  v12 = (_DWORD *)(v3 + 8 * v5);
LABEL_8:
  result = (_DWORD *)sub_60FF5E0(a1, a2, a3, a4: v6);
  if ( result == (_DWORD *)v3 || *result >> 3 != 5413099 )
  {
    *(_DWORD *)(v3 + 374348848) = ((unsigned __int64)result - v3) >> 3;
    __faststorefence();
    a3 = v3 + 374343744;
    v8 = *(_DWORD *)(v3 + 374343744);
    if ( (v8 & 2) != 0 )
    {
      if ( (v8 & 1) != 0 )
      {
        v10 = v3 + 374343744 - *(_QWORD *)(v3 + 374343736);
        if ( *(_BYTE *)(v10 + 57) != 0 )
          *(_BYTE *)(v10 + 57) = 0;
        v6 = result;
      }
      else
      {
        a3 &= 0xFFFFFFFFFFF80000LL;
        v9 = (v3 + 374343744 - (((v3 + 374343744) & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9;
        if ( *(_BYTE *)(a3 + v9 + 56) != 0 )
          *(_BYTE *)(a3 + v9 + 56) = 0;
        v6 = result;
      }
    }
    else
    {
      v6 = result;
    }
    goto LABEL_3;
  }
  if ( *(int *)(v4 + 16) <= 0 )
    return (_DWORD *)sub_277F280();
  return result;
}
