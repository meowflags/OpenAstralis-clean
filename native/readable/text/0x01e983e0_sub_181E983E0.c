// sub_1E983E0
// rva 0x01e983e0  size 701  section .text  group text
// window base 0x181e983e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1E983E0(
        signed __int64 *a1,
        __int64 a2,
        __int64 a3,
        signed __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6)
{
  __int64 v6; // r14
  signed __int64 *v7; // rdx
  signed __int64 *v8; // rdx
  __int64 i; // rax
  unsigned __int64 v10; // rax
  signed __int64 v11; // rbx
  signed __int64 *v12; // rdx
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rax
  signed __int64 v16; // rbx
  signed __int64 v17; // rbx
  unsigned __int64 v18; // rax
  signed __int64 *v19; // rdi
  signed __int64 *v20; // rdx
  unsigned __int64 v21; // rax
  signed __int64 v22; // rbx
  __int64 result; // rax

  v7 = *(signed __int64 **)(v6 + 376656600);
  if ( v7 != nullptr )
  {
    a4 = v7[4];
    if ( *v7 - a4 < a6 )
      JUMPOUT(0x303D22508LL);
    v17 = a6;
    if ( a5 <= a6 )
    {
      if ( a4 == __sync_val_compare_and_swap(v7 + 4, a4, a4 + a6) )
      {
LABEL_20:
        *a1 = v17;
        a4 += (signed __int64)v7;
        if ( a4 != 0 )
          return a4;
      }
      else
      {
        while ( 1 )
        {
          a4 = v7[4];
          v18 = *v7 - a4;
          if ( a6 < v18 )
            JUMPOUT(0x303D22565LL);
          v17 = *v7 - a4;
          if ( a5 > v18 )
            break;
          if ( a4 == __sync_val_compare_and_swap(v7 + 4, a4, *v7) )
            goto LABEL_20;
        }
      }
    }
  }
  v8 = *(signed __int64 **)(v6 + 376656592);
  if ( v8 != nullptr )
  {
    while ( 1 )
    {
      a4 = v8[4];
      v10 = *v8 - a4;
      if ( a6 < v10 )
        JUMPOUT(0x303D22489LL);
      v11 = *v8 - a4;
      if ( a5 > v10 )
        break;
      if ( a4 == __sync_val_compare_and_swap(v8 + 4, a4, *v8) )
      {
        *a1 = v11;
        a4 += (signed __int64)v8;
        if ( a4 == 0 )
          break;
        return a4;
      }
    }
  }
  for ( i = v6 + 376656584;
        (unsigned int)sub_2778A40(a1, a2, a3: i, a4, a5: 4, a6: 0x7FFFFFFF) == 0;
        i = v6 + 376656584 )
  {
    ;
  }
  v12 = *(signed __int64 **)(v6 + 376656600);
  if ( v12 != nullptr )
  {
    v13 = a6;
    v14 = a5;
    do
    {
      a4 = v12[4];
      v15 = *v12 - a4;
      if ( a6 < v15 )
        JUMPOUT(0x303D224E9LL);
      v16 = *v12 - a4;
      if ( a5 > v15 )
      {
        v19 = a1;
        goto LABEL_27;
      }
    }
    while ( a4 != __sync_val_compare_and_swap(v12 + 4, a4, *v12) );
    v19 = a1;
    *a1 = v16;
    a4 += (signed __int64)v12;
    if ( a4 != 0 )
    {
LABEL_37:
      *(_DWORD *)(v6 + 376656588) = 0;
      __faststorefence();
      return a4;
    }
  }
  else
  {
    v19 = a1;
    v13 = a6;
    v14 = a5;
  }
LABEL_27:
  v20 = *(signed __int64 **)(v6 + 376656592);
  if ( v20 != nullptr )
  {
    while ( 1 )
    {
      a4 = v20[4];
      v21 = *v20 - a4;
      if ( v13 < v21 )
        JUMPOUT(0x303D225E9LL);
      v22 = *v20 - a4;
      if ( v14 > v21 )
        break;
      if ( a4 == __sync_val_compare_and_swap(v20 + 4, a4, *v20) )
      {
        *v19 = v22;
        a4 += (signed __int64)v20;
        if ( a4 == 0 )
          break;
        goto LABEL_37;
      }
    }
  }
  result = sub_1E986A0(a1: v19, a2, a3: v6 + 376656584, a4, a5: v13, a6: v19);
  *(_DWORD *)(v6 + 376656588) = 0;
  __faststorefence();
  return result;
}
