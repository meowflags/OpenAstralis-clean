// sub_1932C3094
// rva 0x132c3094  size 369  section .text  group text
// window base 0x1932c3094: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932C3094(_DWORD a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rdi
  unsigned __int64 v6; // r10
  unsigned __int64 v7; // r11
  bool v8; // cf
  __int64 v9; // rdx
  int v10; // ecx
  int v11; // ecx
  __int64 v12; // r8
  __int64 v13; // r9
  char *v14; // rcx
  char v15; // al
  char *v16; // rcx
  char v17; // al
  unsigned int v18; // eax

  if ( (a3 >> 3) + 4 + (a3 >> 9) + a3 + (a3 >> 8) >= a3 )
    JUMPOUT(0x32651D0DCLL);
  v4 = -1;
  if ( (a3 >> 5) + 7 + (a3 >> 11) + a3 + (a3 >> 7) >= a3 )
    JUMPOUT(0x32651D0FCLL);
  if ( (unsigned int)sub_1932C39D8(a1: a4, a2) != 0 )
  {
    if ( v6 >= 0xFFFFFFFFFFFFFFFFLL )
      JUMPOUT(0x32651D10CLL);
    v8 = true;
  }
  else
  {
    v9 = *(_QWORD *)(v5 + 40);
    if ( *(int *)(v9 + 44) <= 0 )
      JUMPOUT(0x32651D125LL);
    v10 = *(_DWORD *)(v9 + 44);
    if ( v10 != 0 )
    {
      v11 = v10 - 1;
      if ( v11 != 0 )
      {
        v12 = 18;
        if ( v11 == 1 )
        {
          v13 = *(_QWORD *)(v9 + 48);
          if ( v13 != 0 )
          {
            if ( *(_QWORD *)(v13 + 16) != 0 )
              v12 = (unsigned int)(*(_DWORD *)(v13 + 24) + 2) + 18LL;
            v14 = *(char **)(v13 + 32);
            if ( v14 != nullptr )
            {
              do
              {
                v15 = *v14;
                ++v12;
                ++v14;
              }
              while ( v15 != 0 );
            }
            v16 = *(char **)(v13 + 48);
            if ( v16 != nullptr )
            {
              do
              {
                v17 = *v16;
                ++v12;
                ++v16;
              }
              while ( v17 != 0 );
            }
            if ( *(_DWORD *)(v13 + 60) != 0 )
              v12 += 2;
          }
        }
      }
      else
      {
        v12 = *(_DWORD *)(v9 + 148) != 0 ? 10LL : 6LL;
      }
    }
    else
    {
      v12 = 0;
    }
    v18 = *(_DWORD *)(v9 + 72);
    if ( v18 == 15 && *(_DWORD *)(v9 + 120) == 15 )
    {
      v8 = v7 + (v7 >> 25) + v12 + (v7 >> 14) + (v7 >> 12) + 7 < v7;
    }
    else
    {
      if ( v18 > *(_DWORD *)(v9 + 120) || *(_DWORD *)(v9 + 172) == 0 )
        v4 = v6;
      v8 = v12 + v4 < v4;
    }
  }
  if ( !v8 )
    JUMPOUT(0x32651D1FALL);
  return -1;
}
