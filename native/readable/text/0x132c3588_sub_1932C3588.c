// sub_132C3588
// rva 0x132c3588  size 380  section .text  group text
// window base 0x1932c3588: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132C3588(__int64 a1, _DWORD a2, _DWORD a3, __int64 a4, unsigned int a5)
{
  __int64 v6; // rdx
  __int64 v7; // rsi
  unsigned int v8; // r8d
  __int64 v9; // rbx
  __int64 v10; // rdi
  int v12; // eax
  int v13; // eax

  if ( (unsigned int)sub_1932C39D8(a1, a2: a4) != 0 )
    return 4294967294LL;
  v9 = *(_QWORD *)(v7 + 40);
  if ( v8 == -1 )
    JUMPOUT(0x32651D5C8LL);
  v10 = v8;
  if ( v8 > 9 || a5 > 4 )
    return 4294967294LL;
  if ( (a5 != *(_DWORD *)(v9 + 176)
     || *(_QWORD *)(16LL * *(int *)(v9 + 172) + 0x85F48) != *(_QWORD *)(16LL * (int)v8 + 0x85F48))
    && *(_DWORD *)(v9 + 64) != -2 )
  {
    if ( (unsigned int)sub_132C2690(a1: v8, a2: v7, a3: 5, a4: v7) != -2 )
    {
      if ( *(_DWORD *)(v7 + 8) != 0 || *(_DWORD *)(v9 + 148) + *(_DWORD *)(v9 + 156) - *(_DWORD *)(v9 + 132) != 0 )
        return 4294967291LL;
      goto LABEL_12;
    }
    return 4294967294LL;
  }
LABEL_12:
  v12 = *(_DWORD *)(v9 + 172);
  if ( v12 != (_DWORD)v10 )
  {
    if ( v12 == 0 )
    {
      v13 = *(_DWORD *)(v9 + 5892);
      if ( v13 != 0 )
      {
        if ( v13 == 1 )
        {
          sub_1932C44E8(a1: v10, a2: v7, a3: v6, a4: v9);
        }
        else
        {
          *(_WORD *)(*(_QWORD *)(v9 + 104) + 2LL * (unsigned int)(*(_DWORD *)(v9 + 116) - 1)) = 0;
          sub_1932CA161(
            a1: v10,
            a2: v7,
            a3: 0,
            a4: *(_QWORD *)(v9 + 104),
            a5: 2LL * (unsigned int)(*(_DWORD *)(v9 + 116) - 1));
          *(_DWORD *)(v9 + 5916) = 0;
        }
        *(_DWORD *)(v9 + 5892) = 0;
      }
    }
    *(_DWORD *)(v9 + 172) = v10;
    *(_DWORD *)(v9 + 168) = *(unsigned __int16 *)(16LL * (int)v10 + 0x85F42);
    *(_DWORD *)(v9 + 180) = *(unsigned __int16 *)(16LL * (int)v10 + 0x85F40);
    *(_DWORD *)(v9 + 184) = *(unsigned __int16 *)(16LL * (int)v10 + 0x85F44);
    *(_DWORD *)(v9 + 164) = *(unsigned __int16 *)(16LL * (int)v10 + 0x85F46);
  }
  *(_DWORD *)(v9 + 176) = a5;
  return 0;
}
