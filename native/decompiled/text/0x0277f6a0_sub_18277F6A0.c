// sub_18277F6A0
// rva 0x0277f6a0  size 282  section .text  group text
// window base 0x18277f6a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
void __fastcall sub_18277F6A0(__int64 a1, __int64 a2, signed __int32 a3, __int64 a4, unsigned int a5, int a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  int v8; // eax
  int v9; // eax
  int v10; // [rsp+Ch] [rbp-Ch]
  signed __int32 v12; // [rsp+14h] [rbp-4h]

  if ( v7 != *(_QWORD *)(v6 + 376668736) )
  {
    v12 = a3;
    v8 = *(_DWORD *)(v6 + 376668724);
    if ( v8 == 1 || v8 == 2 || *(int *)(v7 + 332) >= 1 )
    {
      v10 = a6;
      sub_18277F520(a1, a2, a3, a4: a5, a5);
      a3 = v12;
    }
    else
    {
      v10 = a6;
    }
    if ( a3 == *(_DWORD *)(v7 + 20) )
    {
      a6 = v10;
    }
    else if ( __sync_val_compare_and_swap((volatile signed __int32 *)(v7 + 20), 3, a3) == 3 )
    {
      a6 = v10;
    }
    else
    {
      do
      {
        v9 = *(_DWORD *)(v6 + 376668724);
        if ( v9 == 1 || v9 == 2 || *(int *)(v7 + 332) >= 1 )
        {
          sub_18277F520(a1, a2, a3, a4: a5, a5);
          a3 = v12;
        }
        if ( a3 == *(_DWORD *)(v7 + 20) )
        {
          a6 = v10;
          goto LABEL_14;
        }
      }
      while ( __sync_val_compare_and_swap((volatile signed __int32 *)(v7 + 20), 3, a3) != 3 );
      a6 = v10;
    }
  }
LABEL_14:
  if ( a6 != 0 )
    *(_QWORD *)(v7 + 56) = *(_QWORD *)(*(_QWORD *)(v7 + 56) + 24LL);
  if ( a3 == 1 )
  {
    *(_DWORD *)(v7 + 16) = 0x3FFFFFFF;
    __faststorefence();
  }
}
