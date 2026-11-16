// sub_27839C0
// rva 0x027839c0  size 204  section .text  group text
// window base 0x1827839c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_27839C0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rbx

  v4 = *(_QWORD *)(v3 + 376178832);
  if ( v4 != 0 )
  {
    v5 = *(_QWORD *)(v4 + 256);
    if ( v4 == a3 )
    {
      v6 = *(_QWORD *)(v4 + 256);
      v4 = 0;
LABEL_9:
      if ( v4 != 0 )
        *(_QWORD *)(v4 + 256) = v6;
      else
        *(_QWORD *)(v3 + 376178832) = v6;
      *(_QWORD *)(a3 + 256) = a3;
      --*(_DWORD *)(v3 + 376195592);
    }
    else
    {
      while ( v5 != 0 )
      {
        v6 = *(_QWORD *)(v5 + 256);
        if ( v5 == a3 )
          goto LABEL_9;
        v4 = v5;
        v5 = *(_QWORD *)(v5 + 256);
      }
    }
  }
  return sub_207F840(a1, a2, a3: v3 + 376668480);
}
