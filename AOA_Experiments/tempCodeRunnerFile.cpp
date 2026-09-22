ges.begin(), edges.end(), [](Edge a, Edge b){
        a.weight < b.weight;
    })